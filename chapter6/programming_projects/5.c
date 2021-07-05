/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Asks the user to enter a number, then prints the number
 *                  with its digits reversed.
 *                  
 *                  Generalize the program so that the number can have one, two, three,
 *                  or more digits.
 *                  HINT: use a (do loop) that repeatedly divides the number by 10,
 *                  stopping when it reaches 0.
 *
 *        Version:  1.0
 *        Created:  09/04/2020 04:07:58 PM
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
  int number = 0;
  printf("Enter a number: ");
  scanf("%d", &number);
do {
    printf("%d \n", number % 10); 
    number /= 10;
    } while (number > 0);

  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

