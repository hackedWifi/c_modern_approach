/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  Computes the factorial of a positive integer.
 *                  
 *
 *        Version:  1.0
 *        Created:  10/15/2020 09:29:59 PM
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
  short num, factorial = 1;
  printf("Enter a positive number: ");
  scanf("%hd", &num);
  for(int i = 1; i <=num ; i++){
    factorial *= i;
  }
  printf("Factorial of %hd: %hd ", num, factorial);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

