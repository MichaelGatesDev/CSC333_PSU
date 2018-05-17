/*In this example, a parent process forks a child process and then waits for the child to complete its initialization. The child process tells the parent when it is ready by sending it a SIGUSR1 signal, using the kill function. */

#include <signal.h>
#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>



/* When a SIGUSR1 signal arrives, set this variable. */
volatile sig_atomic_t usr_interrupt = 0;

void synch_signal (int sig)
{
       usr_interrupt = 1;
}

void child_function (void)
{
       printf ("I'm here!!!  My pid is %d.\n", (int) getpid ());

       kill (getppid (), SIGUSR1);	/* ?? */

       puts ("Bye, now....");	/* ?? */
       exit (0);
}

int  main (void)
{
       struct sigaction usr_action;
       sigset_t block_mask;
       pid_t child_id;

       /* Establish the signal handler. */
       sigfillset (&block_mask);
       usr_action.sa_handler = synch_signal;
       usr_action.sa_mask = block_mask;
       usr_action.sa_flags = 0;
       sigaction (SIGUSR1, &usr_action, NULL);

       child_id = fork ();	/* ?? */

       if (child_id == 0)
         child_function ();          /* ?? */

       while (!usr_interrupt)	/* ?? */
         ;

       puts ("That's all, folks!");	/* ?? */

       return 0;
}
