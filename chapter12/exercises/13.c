/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Section 8.2 had a program fragment in which two nested for loops
 *                  initialized the array ident for use as an identity matrix. Rewrite
 *                  this code, using a single pointer to step through the array one
 *                  element at the time. HINT: since we won't be using row and col index
 *                  variables, it won't be easy to tell when to store 1. Instead, we can 
 *                  use the fact that the first element of the array should be 1, the 
 *                  next N elements should be 0, the next element should be 1, and so 
 *                  forth. Use a variable to keep track of how many consecutives 0s have
 *                  been stored, when the count reaches N, it's time to store 1.
 *
 *        Version:  1.0
 *        Created:  02/18/2021 04:19:49 PM
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
#define N 10             /*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    double identity[N][N];
    double *p;
    int i = N;
    /*int count;*/

    
    for ( p = &identity[0][0]; p < &identity[N-1][N-1];p++ ) {

        if(i == N ) 
        {
            *p = 1.0;
            i = 0;
        }

        else {
            *p = 0;
        i++;
        
        }

    }

int row, col;
    for (row = 0; row < N; row++) {
        for (col = 0; col < N; col++) {
            printf("%.0f ", identity[row][col]);
        }
        printf("\n");
    }

    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

