/*
 * =====================================================================================
 *
 *       Filename:  22.c
 *
 *    Description:  Let chess_pieces be the following enumeration:
 *                  enum chess_pieces { KING, QUEEN, ROOK, BISHOP, KNIGHT, PAWN }
 *                  (a) Write a declaration (including an initializer) for a constant
 *                  array of integers named piece_value that stores the numbers 200, 9,
 *                  5, 3, 3, and 1, representing the value of each chess piece, from king 
 *                  to pawn. (The King's value is actually infinite, since "capturing"
 *                  the king (checkmate) end the game, but some chess-playing software 
 *                  assings the king a large value such as 200.)
 *
 *                  (b) (C99) Repeat part (a), but use a designated initializer to initia-
 *                  lize the array. Use the enumeration constants in chess_pieces as subs-
 *                  criptis in the designatos. (HINT: See the last questions in Q&A for an
 *                  example.)
 *                  
 *
 *
 *                  
 *        Version:  1.0
 *        Created:  04/27/2021 11:58:19 PM
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
  //(a)
  enum chess_pieces { KING, QUEEN ,ROOK, BISHOP, KNIGHT, PAWN };
  const int piece_value[] = { 200, 9, 5, 3, 3, 1 };

  //(b)
  const int piece_value1[] = { [KING] = 200, [QUEEN] = 9, [ROOK] = 4,
                              [BISHOP] = 3, [KNIGHT] = 3, [PAWN] = 1 };
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
