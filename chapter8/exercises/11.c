
/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Write declaration for an 8 x 8 char array named chess_board. Include
 *                  an initializer that puts the data bellow.
 *
 *        Version:  1.0
 *        Created:  10/21/2020 10:17:22 PM
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
 char chess_board[8][8] = { {0} };

 for ( int i = 0 ; i < 8; i++ ) {
   printf ( "\n" );
   for ( int j = 0; j < 8; j++ ) {
     if((i + j) % 2 == 0) chess_board[i][j] = 'B';
     else chess_board[i][j] = 'R';
     printf("%c", chess_board[i][j]);
   }
 }
                          
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

