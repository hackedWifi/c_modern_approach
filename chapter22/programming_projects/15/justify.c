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
#include <stdlib.h>
#include "line.h"
#include "word.h"

#define MAX_WORD_LEN 20

int main(int argc, char *argv[])
{
  char word[MAX_WORD_LEN+2];
  int word_len;
  FILE *fp, *out;
  if(argc < 2)
  {
    printf("Usage: justify inputfile outputfile");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "r")) == NULL)
  {
    printf("Cannot open %s", argv[1]);
    exit(EXIT_FAILURE);
  }

  if((out = fopen(argv[2], "w")) == NULL)
  {
    printf("Cannot open %s", argv[2]);
    fclose(fp);
    exit(EXIT_FAILURE);
  }
  clear_line();

  for ( ; ;  ) {
  word_len = read_word(word, MAX_WORD_LEN+1, fp);
  if(word_len == 0)
  {
  flush_line(out);
    return 0;
  }

/*  if(word_len > MAX_WORD_LEN)*/
    /*word[MAX_WORD_LEN] = '*';*/
  if(word_len + 1 > space_remaining())
  {
    write_line(out);
    clear_line();
  }
  add_word(word);
  }
  fclose(fp);
  fclose(out);
}
