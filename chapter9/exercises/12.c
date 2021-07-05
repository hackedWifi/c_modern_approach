/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  Write the following function: double inner_product(double a[], double[]
 *                  b, int n) The function should return a[0] * b[1] + a[1] * b[1].. 
 *
 *        Version:  1.0
 *        Created:  12/03/2020 09:42:35 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>			/*  */
#include <stdlib.h>
#define SIZE 4
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
double inner_product(double a[], double b[], int n);

int main ( int argc, char *argv[] )
{
    double a[SIZE] = { 10.0, 14.0, 14.0, 15.0 };
    double b[SIZE] = { 13.0, 12.0, 11.0, 19.0 };
    printf ( "%.4g \n" , inner_product(a, b, SIZE ));


    return EXIT_SUCCESS;
}

double inner_product(double a[], double b[], int n) 
{
double add_product = 0;

    for ( int i = 0; i < n; i++ ) {
        add_product += (a[i] * b[i]);

    }
    return add_product ;
}
 				/* ----------  end of function main  ---------- */
