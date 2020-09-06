/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  A program that reads an integer and displays it in octal (base 8) 
 *
 *        Version:  1.0
 *        Created:  09/04/2020 10:33:19 PM
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
  int num = 0;
  printf("Enter a number between 0 and 3767: ");
  scanf("%d", &num);
  printf("In octal your number is: %5o",  num);
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
