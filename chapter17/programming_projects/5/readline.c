/*
 * =====================================================================================
 *
 *       Filename:  readline.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/19/2021 03:46:39 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <ctype.h>
#include <stdio.h>
#include "readline.h"

int readline(char str[], int n)
{
  int ch, i = 0;
/*  while(isspace(ch = getchar()))*/
    /*; [> skips white space <]*/

  while ( (ch = getchar()) != '\n') {
    if (i < n)
    {
      str[i++] = ch;
    }
  }
  str[i] = '\0';
  return i;

}
