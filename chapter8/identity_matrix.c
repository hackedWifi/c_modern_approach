/*
 * =====================================================================================
 *
 *       Filename:  identity_matrix.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  10/19/2020 03:12:06 PM
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
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  double identity[N][N];
  int row, col;
  
  for ( row = 0; row < N; row++ ) {
    for ( col = 0; col < N; col++ ) {

      if ( row == col ) {
        identity[row][col] = 1.0;
      }
        else
          identity[row][col] = 0.0;
    printf("%.2lf\n", identity[row][col]);
    }
  }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


