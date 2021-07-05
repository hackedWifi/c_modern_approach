/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  Rewrite the following function to use pointer arithmetic instead of
 *                  array subscripting. (In other words, eliminate the variables i and j
 *                  and all uses of [] operator.) Use a single loop instead of nested 
 *                  loops.
 *
 *        Version:  1.0
 *        Created:  02/20/2021 10:04:11 PM
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

#define LEN 4
int sum_two_dimensional_array(const int a[][LEN], int n);

/*int sum_two_dimensional_array(const int a[][LEN], int n)*/
/*{*/
    /*int i, j, sum = 0;*/
    /*for(i = 0; i < n; i++)*/
        /*for(j = 0; j < LEN; j++)*/
            /*sum += a[i][j];*/
    /*return sum;*/
/*}*/
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int const a[4 ][LEN] = {{ 32,32,22,12}};
    int sum = sum_two_dimensional_array(&a[0], 4);    
    printf("Sum is  %d", sum);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int sum_two_dimensional_array(const int a[][LEN], int n)
{
    int sum = 0; 
    int const *p ;
    
    for ( p = &a[0][0]; p < &a[n-1][LEN-1]; p++ ) {
        sum += *p;

    }
        return sum;
}

