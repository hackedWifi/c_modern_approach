/*
 * =====================================================================================
 *
 *       Filename:  sum.c
 *
 *    Description:  Write a program named sum.c that adds up its command-line arguments,
 *                  which are assumed to be integers. Running the program by typing.
 *                  sum 8 24 62
 *                  should produce the following output:
 *                  Total: 94
 *
 *                  HINT: Use atoi function to convert each command-line arguments from
 *                  string form to integer form.
 *
 *        Version:  1.0
 *        Created:  03/16/2021 04:24:18 PM
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
  char **p; 
  int sum = 0;



  for ( p =  &argv[1]; *p; p++) {
    sum += atoi(*p);

  }
  printf("The sum of the arguments is: %d \n", sum);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
