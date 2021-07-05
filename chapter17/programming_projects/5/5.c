/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Write a program that sorts a series of words entered by the user:
 *                  Enter word: foo
 *                  Enter word: bar
 *                  Enter word: baz
 *                  Enter word: quux
 *                  Enter word: 
 *                  
 *                  In sorted order: bar baz foo quux
 *
 *                  Assume that each word is no more that 20 characters long. Stop rea-
 *                  ding when the user enters an empty word (i.e., presses Enter without
 *                  entering a word). Store each word in a dynamically allocated string,
 *                  using an array of pointers to keep track of the strings, as in the
 *                  remind2.c program (Section 17.2). After all words have been read, 
 *                  sort the array (using any sorting technique) and then use a loop to 
 *                  print the words in sorted order. HINT: Use the read_line function to
 *                  read each word, as in remind2.c
 *          
 *
 *        Version:  1.0
 *        Created:  05/13/2021 03:36:39 PM
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
#include <string.h>
#include "readline.h"
#define WORD_LEN 20
#define MAX_WORDS  4
int compare_str(const void *p, const void *q);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char *words[MAX_WORDS] , *word; 

  int  i, num_words = 0;
  for(i = 0; ; i++)
  {
    if(num_words == MAX_WORDS)
    {
      printf("--- No space left ---\n");
      break;
  }
  word = malloc(WORD_LEN + 1);
  printf("Enter word: ");
  readline(word, WORD_LEN);
  words[i] = malloc(strlen(word) + 1);

  if(word[0] == '\0')
      break;
  if(words[i] == NULL)
  {
    printf("--No space left -- \n");
    break;
  }
  
  strcpy(words[i], word);
  num_words++;
}
  qsort(words, num_words , sizeof(words[0]), compare_str);
  printf("In sorted order: " );
  for(i = 0; i < num_words; i++)
    printf("%s ", words[i]);

  free(word);
  return EXIT_SUCCESS;
}	

int compare_str(const void *p, const void *q)
{
    return strcmp(*(char **)p, *(char **)q);

}			/* ----------  end of function main  ---------- */
