/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Suppose that p has been declared as follows:
 *                  char *p = "abc";
 *                  Which of the following function calls are legal? show the output 
 *                  produced by each legal call, and explain why the others are illegal.
 *
 *        Version:  1.0
 *        Created:  03/02/2021 09:24:21 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   char *p = "abc";
   // a) putchar(p) expects a  single integer and it's getting a pointer to characters
   // c) puts(*p) expects a string literal and it is getting an integer

   puts(p);
   putchar(*p);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
