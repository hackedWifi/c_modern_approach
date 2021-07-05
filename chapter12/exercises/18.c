/*
 * =====================================================================================
 *
 *       Filename:  18.c
 *
 *    Description:  Write the evaluate_position function described in Exercise 13 of
 *                  Chapter 9. Use pointer arithmetic─not subscripting─to visit array
 *                  elements. Use a single loop instea of nested loops.
 *
 *        Version:  1.0
 *        Created:  02/20/2021 10:43:42 PM
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
    char board[SIZE][SIZE] = {{ 'Q', 'N', 'P'},
                    {'r', 'p', 'b'}};
    printf("Evaluate chess positions: %d", evaluate_position(board)); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int evaluate_position(char board[SIZE][SIZE])
{

  int white_pieces, black_pieces = 0;
  char *p ;


  for ( p = *board; p < *board + SIZE * SIZE; p++ ) {
    
    
    switch (*p) {
      case 'Q':	
        white_pieces += 9;
        break;
      case 'q':
       black_pieces += 9;
        break;

      case 'R':	
        white_pieces += 5;
        break;
      case 'r':
        black_pieces += 5;
        break;

      case 'N':
        white_pieces += 3;
        break;
      case 'n':
        white_pieces += 3;
        break;
      case 'B':	
        white_pieces += 3;
        break;
      case 'b':
        black_pieces += 3;
        break;
      case 'P':
        white_pieces += 1;
        break;
      case 'p':
        black_pieces += 1;
        break;
 
      default:	
        break;
    }	//			[> -----  end switch  ----- <]
     
  }
  return white_pieces - black_pieces;

}
