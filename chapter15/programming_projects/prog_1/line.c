/*
 * =====================================================================================
 *
 *       Filename:  line.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/13/2021 02:49:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
#include <string.h>
#include "line.h"
#define MAX_LINE_LEN 60      /*  */
char line[MAX_LINE_LEN+1];
int line_len = 0;
int num_words = 0;

bool alt_spaces = false;

void clear_line(void)
{
  line[0] = '\0';
  line_len = 0;
  num_words = 0;
} 

void add_word(const char *word)
{
  if (num_words > 0)
  {
    line[line_len] = ' ';
    line[line_len+1] = '\0';
    line_len++;
  }
  strcat(line, word);
  line_len += strlen(word);
  num_words++;

}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  int extra_spaces, spaces_to_insert, i, j;
  extra_spaces = MAX_LINE_LEN - line_len;
  alt_spaces = true;

  for ( i = 0; i < line_len; i++ ) {

    if ( line[i] != ' ' ) {
      putchar(line[i]);
    }
    else {
      spaces_to_insert = extra_spaces / (num_words - 1);

      if(alt_spaces && extra_spaces > 0){
        spaces_to_insert++;
        alt_spaces = true;
      }

      for ( j = 1; j <= spaces_to_insert + 1; j++ ) {
            putchar(' ');
      }
      extra_spaces -= spaces_to_insert;
      num_words--;
    }
  }
  putchar('\n');
}

void flush_line(void)
{
  if(line_len > 0)
    puts(line);
}
