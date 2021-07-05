/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Counts the number of vowels in a sentence. 
 *
 *        Version:  1.0
 *        Created:  10/12/2020 07:57:25 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

  char input;
  int count = 0;
  printf("Please enter a sentence: ");
  scanf("%c", &input);

  do {
   input = tolower(input); 
    if(input == 'a' || input == 'e' || input == 'i' || 
       input == 'o' || input == 'u' ) {
      count++;
    }  
  } while( ( input = getchar() ) != '\n' );
  printf("Your sentence contains %d vowels\n", count);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
