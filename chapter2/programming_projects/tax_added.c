/*
 * =====================================================================================
 *
 *       Filename:  tax_added.c
 *
 *    Description:  A program that ask the user to enter a value for x and then displays the 
 *                  value amount with 5% tax added.
 *
 *        Version:  1.0
 *        Created:  08/13/2020 04:09:39 PM
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
#define TAX 0.05      /*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  float amount = 0; 
  float tax_added = 0;
  printf ( "Please enter amount: \n" );
  scanf ( "%f", &amount );
  tax_added = (amount * TAX) + amount;
  printf ( "Amount with tax added: %f\n", tax_added);
  return EXIT_SUCCESS;


}				/* ----------  end of function main  ---------- */
