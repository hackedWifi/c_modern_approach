/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Computes the value of a word by summing the value of its letters 
 *                  based in the SCRAMBLE CROSSWORD GAME.
 *
 *        Version:  1.0
 *        Created:  10/08/2020 04:01:26 PM
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
#include <ctype.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int input;
  int count = 0;
  printf("Enter a word: ");
  while( (input = getchar()) != '\n') {
    switch ( toupper(input) ) {
      case 'A':	
      case 'E':	
      case 'I':	
      case 'L':	
      case 'N':	
      case 'O':	
      case 'R':	
      case 'S':	
      case 'T':	
      case 'U':	
        count += 1;
        break;

      case 'D':	
      case 'G':	
        count += 2;
        break;

      case 'B':	
      case 'C':	
      case 'M':	
      case 'P':	
        count += 3;
        break;
      case 'F':	
      case 'H':	
      case 'V':	
      case 'W':	
      case 'Y':	
        count += 4;
        break;

      case 'K':	
        count += 5;
        break;
      case 'J':
      case 'X':
        count += 8;
        break;
      case 'Q':
      case 'Z':
        count += 10;

        break;
      default:	
        putchar(input);
        break;
    }				/* -----  end switch  ----- */
  }
  printf("Scramble value: %d", count);
  printf ( "\n" );

    return EXIT_SUCCESS;
  }				/* ----------  end of function main  ---------- */

