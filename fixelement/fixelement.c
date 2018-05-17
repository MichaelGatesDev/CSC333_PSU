#include <stdio.h>


int fix_ele(fix_matrix a, int i, int j)
{
    return a[i][j];
}

int vec_ele(int n, int *a, int i, int j)
{
    return a[IDX(n,i,j)];
}

int var_ele(int n, int a[n][n], int i, int j)
{
    return a[i][j];
}
