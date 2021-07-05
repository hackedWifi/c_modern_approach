/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  A program that prints a magic square ( the sums of rows, columns and 
 *                  diagonals are al lthe same )
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
void print_magic_square(int n, char magic_square[n][n]); 
void create_magic_square(int n, char magic_square[n][n]); 

int main ( int argc, char *argv[] )
{

    int n = 0; 
    char magic_square[n][n];

    printf("This program creates a magic number of a specified size \n"
            "the size must be an odd number between 1-99. \n");

    printf("Enter a size of magic square: ");
    scanf("%d", &n);
    create_magic_square(n, magic_square); 
   print_magic_square(n, magic_square);

   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void create_magic_square(int n, char magic_square[n][n]) 
{
      if ( n > 99 ) {
         
        printf ( "Please input an odd number between 1 - 99 \n" );
    }

    int i = 0, j = 0;
    
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
}

void print_magic_square(int n, char magic_square[n][n]) 
{
    int i = 0, j = 0;
    for ( i = 0; i < n; i++) {
        for (j = 0 ; j < n; j++ ) {
            printf("%4d ", magic_square[i][j]);
        }
        printf ( "\n" );
    }

}

