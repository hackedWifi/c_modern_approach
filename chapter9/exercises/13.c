/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Write the following functions which evaluates a chess position:
 *                  int evaluate_position(char board[8][8]);
 *                  board represents a configuration of pieces on a chessboard, where
 *                  the letters K, Q, B, N, P represent White pieces, and the letters
 *                  k, q, b, p, and n represent Black pieces. evaluate_position should
 *                  sum the values of the White pieces (Q=9, R=5, B=3, N=3, P=1). It 
 *                  should sum the values of Black pieces (done  in a similar way). The
 *                  function will return the difference between the two numbers. This 
 *                  value wil be positive if White has an advantage in material and 
 *                  negative if Black has an advantage.
 *
 *        Version:  1.0
 *        Created:  12/03/2020 10:00:36 PM
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
#define SIZE 8
int evaluate_position(char board[SIZE][SIZE]);

int main ( int argc, char *argv[] )
{
    char b[SIZE][SIZE] = {{'R', 'N', 'B'},
                        {'r', 'b', 'q'}};
    printf("Evaluate chess positions: %d", evaluate_position(b)); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int evaluate_position(char board[SIZE][SIZE])
{

  int row, col, white_pieces, black_pieces = 0;


  for ( row = 0; row < SIZE; row++ ) {
    
    for ( col = 0; col < SIZE; col++ ) {
    
    switch (board[row][col] ) {
      case 'Q':	
      case 'q':
        white_pieces += 9;
        break;

      case 'R':	
      case 'r':
        white_pieces += 5;
        black_pieces += 5;
        break;

      case 'B':	
      case 'b':
      case 'N':
      case 'n':
        white_pieces += 3;
        black_pieces += 3;
        break;
      case 'P':
      case 'p':
        white_pieces += 1;
        black_pieces += 1;
 
      default:	
        break;
    }				/* -----  end switch  ----- */
    }
     
  }
  return white_pieces - black_pieces;

}
