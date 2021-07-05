/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Modify Programming Project 13 from Chanpter 7 so that it includes 
 *                  the following function:
 *                  double compute_average_word_length(const char *sentence);
 *
 *                  The function returns the average length of the words in the 
 *                  string pointed by sentence.
 *
 *        Version:  1.0
 *        Created:  03/25/2021 10:56:32 PM
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

#define N 100
double compute_average_word_length(const char *sentence);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int i = 0;
  char sentence[N], ch;   
   printf ( "Enter a sentence: " );
   
  while( ( ch = getchar() ) != '\n') {
    sentence[i++] = ch;
  }
  sentence[i] = '\0';
  printf("Average word lengths %.1f\n", compute_average_word_length(sentence));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

double compute_average_word_length(const char *sentence)
{
  int spaces = 1;
  double total_chars = 0.0;
  while(*sentence++) {

    if(*sentence == ' ') {
      spaces++; 
    }
    else total_chars++;
  }
  return total_chars/spaces;

}


