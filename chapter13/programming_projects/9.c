/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  Modify Project 10 from Chapter 7 so that it includes the following 
 *                  function:
 *
 *                  int compute_vowel_count(const char *sentence);
 *                  The function returns the number of vowels in the string pointed to 
 *                  by the sentence parameter.
 *
 *        Version:  1.0
 *        Created:  03/24/2021 03:13:16 PM
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
int compute_vowel_count(const char *sentence);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

  char input[50] ;
  printf("Please enter a sentence: ");
  scanf("%s", input);


  printf("Your sentence contains %d vowels\n", compute_vowel_count(input));
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int compute_vowel_count(const char *sentence)
{
  int count = 0;
  do {
    switch(toupper(*sentence)){

      case 'A':	
      case 'E':	
      case 'I':	
      case 'O':	
      case 'U':	
        count++;
        break;
      default:
        break;

    } 
  } while (*sentence++);
  return count;

}
