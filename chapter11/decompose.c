/*
 * =====================================================================================
 *
 *       Filename:  decompose.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  12/30/2020 09:57:31 PM
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

void decompose(double, long *, double *);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    long i;
    double d;
    decompose(3.1415, &i, &d);
    printf("Value of i: %ld ", i);
    printf("Value of i: %lf ", d);

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void decompose(double x, long *int_part, double *frac_part) 
{
    *int_part = (long) x;
    *frac_part = x - *int_part;
}
