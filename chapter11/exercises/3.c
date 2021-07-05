/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  The following function supposedly computes the sum and average of 
 *                  the numbers in the array a, which has length n, avg and sum point
 *                  to variables that the function should modify. Unfortunately, the 
 *                  function contains several errors; find and correct them.
 *
 *        Version:  1.0
 *        Created:  01/06/2021 09:41:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

void avg_sum( double [], int, double *, double *);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */

int main ( int argc, char *argv[] )
{
    
    double a[] = { 10, 20, 30 };
    int n = 3;
    double sum, avg;
    avg_sum(a, n, &avg, &sum);
    printf ( "The sum is: %9.2lf\n", sum);
    printf("The average is: %.2lf\n", avg);

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  avg_sum
 *  Description:  
 * =====================================================================================
 */
void avg_sum ( double a[], int n, double *avg, double *sum )
{
    int i ;
    *sum =  0.0;

    for ( i = 0; i < n; i++ ) {
       *sum += a[i];
       *avg  = *sum / n;
    }

}		/* -----  end of function avg_sum  ----- */
