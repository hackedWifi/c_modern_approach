/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Suppose we want a macro that expands into a string containing the 
 *                  current line number and file name. In other words, we'd like to 
 *                  write:
 *
 *                  const char *str = LINE_FILE;
 *                  and have it expand into
 *
 *                  const char *str = "Line 10 of file foo.c";
 *                  where foo.c is the file containing the program and 10 is the line on
 *                  which the invocation of LINE_FILE appears. Warning: this exercise is 
 *                  for experts only
 *
 *        Version:  1.0
 *        Created:  04/07/2021 04:21:57 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
 printf("printf() at %d of %c ", __LINE__ , __FILE__[0]); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

