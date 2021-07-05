/*
 * =====================================================================================
 *
 *       Filename:  justify.c
 *
 *    Description:  Formats a file of text. 
 *
 *        Version:  1.0
 *        Created:  04/14/2021 04:43:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(void)
{
  char word[MAX_WORD_LEN+2];
  int word_len;

  clear_line();

  for ( ; ;  ) {
  word_len = read_word(word, MAX_WORD_LEN+1);
  if(word_len == 0)
  {
    flush_line();
    return 0;
  }

/*  if(word_len > MAX_WORD_LEN)*/
    /*word[MAX_WORD_LEN] = '*';*/
  if(word_len + 1 > space_remaining())
  {
    write_line();
    clear_line();
  }
  add_word(word);
  }
}
