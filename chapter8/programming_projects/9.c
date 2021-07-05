/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  Generates a random walk across a 10 x 10 array. It randomly walk from
 *                  element to element, always going up, down, left, right by one element. 
 *                  The element visited by the program will be labeled with the letters
 *                  A throught Z, in the order visited. 
 *
 *        Version:  1.0
 *        Created:  11/04/2020 05:58:58 PM
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
#include <time.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#define ROWS 10
#define COLS 10
int main ( int argc, char *argv[] )
{
  int i, j, move, up, down, left, right;
  int current = 65;
  char walk[ROWS][COLS] = {{0}};
  srand((unsigned) time(NULL)); 
  
  while ( current <= 90 ) {
    up = down = right = left = 0;
   
    if ( j + 1 <= COLS && walk[i][j+ 1] == 0 ) {
     up = 1; 
    }
    if ( j - 1 >= 0 && walk[i][j- 1] == 0 ) {
     down = 1; 
    }
    if ( i + 1 < ROWS && walk[i + 1][j] == 0 ) {
     right = 1; 
    }
    if ( i - 1 >= 0 && walk[i - 1][j] == 0 ) {
     left = 1; 
    }
    if(up + down + left + right == 0) {
      break;
    }
    
  move = rand() % 4;

  switch ( move ) {
    case 0:	
      if(up ) {
       walk[i][++j] = current++;       
      break;
      }

    case 1:	
      if(down) {
      walk[i][--j] = current++;       
      break;
      }

    case 2:	
      if(left) {
      walk[--i][j] = current++;       
      break;
      }
    case 3:
      if(right) {
      walk[++i][j] = current++;       
      break;
      }

    default:	
      break;
  }				/* -----  end switch  ----- */
  }

  for ( i = 0; i < ROWS; i++ ) {
    printf("\n");
    for ( j = 0 ; j < COLS; j++ ) {
      if(walk[i][j] == 0)
        walk[i][j] = '.';
      printf("%c" ,walk[i][j]);
       }
  }
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
