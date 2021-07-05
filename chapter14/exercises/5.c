/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Let TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
 *                  
 *                  let s be a string and let i be an int variable.  Show the output of
 *                  produced bye each of the following program fragments.
 *
 *                  (a) strcpy(s, "abcd");
 *                  int i=0;
 *                  putchar(TOUPPER(s[++i]));
 *
 *                  (b) strcpy(s, "0123");
 *                  i = 0;
 *                  putchar(TOUPPER(s[++i]));
 *
 *        Version:  1.0
 *        Created:  04/06/2021 03:35:27 PM
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

#define TOUPPER(c) ('a'<=(c)&&(c)<='z'?(c)-'a'+'A':(c))
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char s[5];

  strcpy(s, "abcd");
  int i=0;

  // TOUPPER(c) ('a'<=(s[++i])&&(s[++i])<='z'?(s[++i])-'a'+'A':(c))
  // TOUPPER(c) ('a'<=(s[1])&&(s[2])<='z'?(s[3])-'a'+'A':(c))

  /*So, since the value of s[1] which is b is greater than 'a' and the value*/
    /*of s[2], which is c is less than 'z'. The condition evaluates to TRUE. So, putchar*/
     /* returns the value of s[3] which in this case is 'D'*/
  putchar(TOUPPER(s[++i]));

  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

