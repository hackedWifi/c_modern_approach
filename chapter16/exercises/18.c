/*
 * =====================================================================================
 *
 *       Filename:  18.c
 *
 *    Description:  (a) Each square of a chessboard can hold one piece - a pawn, knight, 
 *                  bishop, rook, queens, or king - or it may be empty. Each piece is ei-
 *                  ther black or white. Define two enumerated types: Piece, which has
 *                  seven possibles values (one which is empty), and Color, which has
 *                  two.
 *
 *                  (b) Using types from part (a), define a structure type named Square
 *                  that can store both the type of a piece and its color.
 *
 *                  (c) Using the Square type from part (b), declare an 8x8 array named
 *                  board that can store the entire contents of a chessboard.
 *
 *                  (d) Add an initializerto the declaration in part (c) so that the 
 *                  board's initial value corresponds to the usual arrangement of pieces
 *                  at the start of a chess game. A square that's not occupied by a piece
 *                  should be "empty" piece value and the color black.
 *                  
 *                
 *
 *
 *        Version:  1.0
 *        Created:  04/27/2021 12:00:21 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

typedef enum { BLACK, WHITE } Color;
typedef enum  { EMPTY, PAWN, KNIGHT, BISHOP, ROOK, QUEEN, KING } Piece;
typedef struct { Piece piece;
                 Color color; } Square;
Square board[8][8] = { {{ROOK, WHITE}, {KNIGHT, WHITE}, {BISHOP, WHITE}, {QUEEN, WHITE}, 
                       {KING, WHITE}, {BISHOP, WHITE}, {KNIGHT, WHITE}, {ROOK, WHITE} },
                      {{PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE},
                       {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE}, {PAWN, WHITE} },
                      {{EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE},
                       {EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE} },
                      {{EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK},
                       {EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK} },
                      {{EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE},
                       {EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE} },
                      {{EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK},
                       {EMPTY, WHITE}, {EMPTY, BLACK}, {EMPTY, WHITE}, {EMPTY, BLACK} },
                      {{PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK},
                       {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK}, {PAWN, BLACK} },
                      {{ROOK, BLACK}, {KNIGHT, BLACK}, {BISHOP, BLACK}, {QUEEN, BLACK}, 
                       {KING, BLACK}, {BISHOP, BLACK}, {KNIGHT, BLACK}, {ROOK, BLACK} }
                      };


