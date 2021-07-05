/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Translates an alphabetic phone number into numberic form. 
 *
 *        Version:  1.0
 *        Created:  10/08/2020 02:42:04 PM
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
  int input ;
  printf("Enter a phone number: " );
  while((input = getchar()) != '\n' )  {
    if(input == 'A' || input == 'B' || input == 'C') {
      input = '2';
    }

    if(input == 'D' || input == 'E' || input == 'F') {
      input = '3';
    }

    if(input == 'G' || input == 'H' || input == 'I') {
      input = '4';
    }

    if(input == 'J' || input == 'K' || input == 'L') {
      input = '5';
    }

    if(input == 'M' || input == 'N' || input == 'O') {
      input = '6';
    }

    if(input == 'P' || input == 'Q' || input == 'R' || input == 'S') {
      input = '7';
    }

    if( input == 'T' || input == 'U' || input == 'V') {
      input = '8';
    }

    if(input == 'W' || input == 'X' || input == 'Y' || input == 'Z')  {
      input = '9';
    }
    printf("%c", input);
  }
  printf ( "\n" );

  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
