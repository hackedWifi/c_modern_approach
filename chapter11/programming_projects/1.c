/*
 * =====================================================================================
 *
 *       Filename:  split_bills.c
 *
 *    Description:  Asks the user for a dollar amount, then shows how to pay 
 *                  that amount usint the smalles number of bills.
 *
 *        Version:  1.0
 *        Created:  08/14/2020 03:57:44 PM
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

void pay_amount(int dollars, int *twenties, int *tents, 
                int *fives, int *ones);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )

{
  int dollars ;
  int twenty, ten , five, one ;
  printf ( "Enter a dollar amount: ");
   scanf ( "%d", &dollars);
  pay_amount(dollars, &twenty, &ten, &five, &one);
  printf ( "$20 bills: %d\n", twenty);
  printf ( "$10 bills: %d\n", ten );
  printf ( "$5  bills: %d\n", five );
  printf ( "$1  bills: %d\n", one );
  
  return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */
void pay_amount(int dollars, int *twenties, int *tents, int *fives, int *ones)
  {
      *twenties = dollars / 20;
      dollars -= *twenties * 20;
      *tents = dollars / 10;
      dollars -= *tents * 10;
      *fives = dollars / 5;
      dollars -= *fives * 5;
      *ones = dollars / 1;
      dollars -= *ones * 1;


  }
