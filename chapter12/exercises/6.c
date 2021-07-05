/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Rewrite the following function to use pointer arithmetic instead of
 *                  array subscripting. (In other words, eliminate the variable i and all
 *                  uses of the [] operator.) Make as few changes as possible.
 *
 *        Version:  1.0
 *        Created:  02/12/2021 10:08:02 PM
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

int sum_array(const int a[], int n);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )

{
    int a[] = { 10,20,30};
    int n = 3;
    
    printf("The sum is: %d", sum_array(a, n));
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


int sum_array(const int a[], int n)
{
    const int *p; int sum;
    sum = 0;
    
    for ( p = a; p < &a[n]; ) {
        sum += *p++;
    }
   return sum; 
}
