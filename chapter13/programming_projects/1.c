/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Write a program that finds the "smallest" and "largest" in a series
 *                  of words. After the user enters the words, the program will determine
 *                  which words would come first and last if the words were listed in
 *                  dictionary order. The program must stop accepting input when the user
 *                  enters a four-letter word. Assume that no word is more than 20
 *                  letters long.
 *
 *                  HINT: Use two strings named smallest_word and largest_word to keep 
 *                  track of the "smallest" and "largest" words entered so far. Each time
 *                  the user enters a new word, use strcmp to compare it with 
 *                  smallest_word; if the wew word is "smaller", use strcpy to save it 
 *                  in smallest_word. Do a similar comparison with largest_word. Use 
 *                  strlen to determine when the user has entered a four-letter word.
 *
 *        Version:  1.0
 *        Created:  03/10/2021 03:13:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#define N 20            /*  */

int read_line(char str[], int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char input[N];
  char smallest_word[N] = "";
  char largest_word[N] = "";

  for(;;)
  {
    printf("Enter a word: ");
    read_line(input, N);
    if(strlen(smallest_word) <= 0) 
      strcpy(smallest_word, input);
    if(strlen(largest_word) <= 0)
      strcpy(largest_word, input);

    if(strcmp(input, smallest_word) < 0){
      strcpy(smallest_word, input);
      /*strcpy(largest_word, smallest_word);*/
    }
    else if(strcmp(input, largest_word) > 0)  
    {
      strcpy(largest_word, input);
    }
    if(strlen(input) == 4) break;
  }


 
  puts(smallest_word);
  puts(largest_word);

  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int read_line(char str[], int n)
{
  int ch, i = 0;

  while (( ch = getchar()) != '\n')
    if(i < n)
      str[i++] = ch;
 str[i] = '\0';
  return i;
}
