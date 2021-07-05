/*
 * =====================================================================================
 *
 *       Filename:  maxmin.c
 *
 *    Description:  Finds the largest and smallest elements in an array. 
 *
 *        Version:  1.0
 *        Created:  12/30/2020 10:29:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#define N 10            /*  */

void max_min(int a[], int n, int *max, int *min);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int b[N], i, big, small;
    printf ( "Enter %d numbers \n", N );

    for ( i = 0; i < N; i++ ) {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);
    printf ( "Largest: %d\n", big );   
    printf ( "Smalles: %d\n", small);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  max_min
 *  Description:  
 * =====================================================================================
 */
void max_min (int a[], int n, int *max, int *min )
{
    int i;
    *max = *min = a[0];

    for ( i = 1; i < n; i++ ) {
        if(a[i] > *max)
            *max = a[i];
        else if (a[i] < *min)
            *min = a[i];

    }
}		/* -----  end of function max_min  ----- */
