/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Calculates the average word length for a sentence. 
 *
 *        Version:  1.0
 *        Created:  10/15/2020 04:50:24 PM
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
  int ch = 0, spaces = 1;
  float total_chars = 0.0; 
   printf ( "Enter a sentence: " );
  while( ( ch = getchar() ) != '\n') {
    if(ch == ' ') {
      spaces++; 
    }
    else total_chars++;
  }

 
  printf("Average word lengths %.1f\n", total_chars/spaces);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
