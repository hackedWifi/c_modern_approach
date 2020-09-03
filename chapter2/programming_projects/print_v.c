/*
 * =====================================================================================
 *
 *       Filename:  print_v.c
 *
 *    Description:  Print a "v" with asteriks to the screen 
 *
 *        Version:  1.0
 *        Created:  08/12/2020 04:26:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto (), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>


#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )

{
  char ast = '*';
  printf ( "%10c\n", ast );
  printf ( "%9c\n", ast );
  printf ( "%8c\n", ast );
  printf ( "%c%6c\n",ast, ast );
  printf ( "%2c%4c\n", ast, ast );
  printf ( "%4c\n", ast );
  
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
