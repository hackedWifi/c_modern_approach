/*
 * =====================================================================================
 *
 *       Filename:  reverse_args.c
 *
 *    Description:  Write a program named reverse_args.c that echoes its command-line arguments
 *                  in a reverse order. Running the program by typing
 *
 *                  reverse void an null
 *                  should produce the foloowing output:
 *                  null and void
 *
 *        Version:  1.0
 *        Created:  03/15/2021 04:46:53 PM
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
#include <ctype.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char **p; 


  for ( p = &argv[argc - 1]; p  > &argv[0]; p--) {
    printf ( "%s ", *p);

  }
  printf("\n");
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
