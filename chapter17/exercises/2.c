/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Write a function named duplicate that uses dynamic storage allocation
 *                  to create a copy of a string. For example, the call
 *                  p = duplicate(str);
 *
 *                  would allocate space for a string of the same length as str, copy the
 *                  contents of str into the new string, and return a pointer to it. Ha-
 *                  ve duplicate return null pointer if the memory allocation fails.
 *
 *        Version:  1.0
 *        Created:  05/03/2021 04:20:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
char *duplicate(const char *str);

char *duplicate(const char *str)
{
  void *p = malloc(sizeof(str));
  if(p == NULL)
    return NULL;
  strcpy(p, str);
  return p;
  
}

