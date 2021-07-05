/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  A program that prints a magic square ( the sums of rows, columns and 
 *                  diagonals are all the same )
 *
 *        Version:  1.0
 *        Created:  11/19/2020 09:15:28 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

    int n = 0, i, j; 
    printf("This program creates a magic number of a specified size \n"
            "the size must be an odd number between 1-99. \n");

    printf("Enter a size of magic square: ");
    scanf("%d", &n);

     if ( n > 99 ) {
         
        printf ( "Please input an odd number between 1 - 99 \n" );
        return 0;
    }

   int magic_square[n][n];
    
    for ( i = 0; i < n; i++) {
        for (j = 0 ; j < n; j++ ) {
            magic_square[i][j] = 0;
        }
    }
    i = 0;
    j = n / 2;

    for ( int step = 1; step <= n * n;) {

        if ( i == -1  && j == n) {
            i += 2;
            j = n - 1;
        }

        else { 
            if( j == n  ) j = 0;
            if( i == -1 ) i = n - 1;
        }


        if(magic_square[i][j]) {
            i = i + 2;
            j = j - 1;
            continue;
        }
        else {
            magic_square[i][j] = step++;
            j++;
            i--;
        }

    }

    for ( i = 0; i < n; i++) {
        for (j = 0 ; j < n; j++ ) {
            printf("%d ", magic_square[i][j]);
        }
        printf ( "\n" );
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

