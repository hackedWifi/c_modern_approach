/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Modify the maxmin.c program of Sectionm 11.4 so that the max_min
 *                  function uses a pointer instead of an integer to keep track of the
 *                  current position in the array.
 *
 *        Version:  1.0
 *        Created:  02/28/2021 11:12:08 PM
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
    printf ( "Enter %d numbers ", N );

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
    int *p ;
    *max = *min = a[0];

    for ( p = a; p < a + n; p++ ) {
        if(*p > *max)
            *max = *p;
        else if (*p < *min)
            *min = *p;

    }
}		/* -----  end of function max_min  ----- */
