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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )

{
  int amount = 0; 
  int remain =0;
  int twenty = 0; int ten = 0;
  int five = 0;
  int one = 0;

  printf ( "Enter a dollar amount: ");
  scanf ( "%d", &amount);
  twenty = amount / 20;
  remain = amount - (twenty * 20);
  ten = remain / 10;
  remain = remain -(ten * 10);
  five = remain / 5;
  remain = remain -(five * 5);
  one = remain / 1;
  remain = remain -(one * 1);
  printf ( "$20 bills: %d\n", twenty);
  printf ( "$10 bills: %d\n", ten );
  printf ( "$5  bills: %d\n", five );
  printf ( "$1  bills: %d\n", one );
  
  return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */

