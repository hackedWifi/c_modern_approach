/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Reads a 5 x 5 array of integers and then prints the row sums and
 *                  the column sums.
 *
 *        Version:  1.0
 *        Created:  11/02/2020 09:12:24 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#define ROWS 5
#define COLS 5
int main ( int argc, char *argv[] )
{
  int i, j, total;
  int matrix[ROWS][COLS] = {{0}};

  for ( i = 0 ; i < ROWS; i++ ) {
 printf("Enter a Row %d: ", i + 1);
    for( j = 0; j < COLS; j++ ) {
 scanf("%d", &matrix[i][j]);
          }
}

printf("\nRow totals: "); 

for ( i = 0 ; i < ROWS; i++ ) {
  total = 0;
    for( j = 0; j < COLS; j++ ) {
      total += matrix[i][j];
          }

      printf ( "%d ", total );
}
printf("\nColumn totals: "); 
for ( i = 0 ; i < COLS; i++ ) {
  total = 0;
    for( j = 0; j < COLS; j++ ) {

      total += matrix[j][i];
          }

      printf ( "%d ", total );
}
printf("\n");
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

