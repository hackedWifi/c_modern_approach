/*
 * =====================================================================================
 *
 *       Filename:  word.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/13/2021 02:41:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "word.h"

int read_char(FILE *fp)
{
  int ch = fgetc(fp); 
  
  if ( ch == '\n' || ch == '\t') {
    return ' ';
  }
  return ch;
}

int read_word(char *word, int len, FILE *fp)
{
  int ch, pos = 0;


  while ( (ch = read_char(fp)) == ' ' ) {
    ;
  }

  while ( ch != ' ' && ch != EOF ) {
    if (pos < len)
      word[pos++] = ch;
    else {
      word[len-1] = '*';
    }
    ch = read_char(fp);
  }
  word[pos] = '\0';
  return pos;
}
