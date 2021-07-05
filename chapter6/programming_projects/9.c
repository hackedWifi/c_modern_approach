/*
 * =====================================================================================
 *
 *       Filename:  loan.c
 *
 *    Description:  Calculates the remaining balance on a loan after the first,
 *                  second, and third monthly payments.
 *                  
 *
 *        Version:  1.0
 *        Created:  08/17/2020 02:40:45 PM
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
    
  float amount, rate, balance, increase_rate, payment= 0;
  int i = 0;
  int num_of_payments = 0;
  printf("Enter amount of loan: ");
  scanf("%f", &amount);
  printf("Enter interest rate: ");
  scanf("%f", &rate);
  printf("Enter monthly payment: ");
  scanf("%f", &payment);
  increase_rate = (rate / 100) / 12;
  printf("Please enter the number of payments: ");
  scanf("%d", &num_of_payments);

  while (i < num_of_payments) {
  i++;
  balance = (amount - payment) + amount * increase_rate;
  printf ( "Balance remaining after %d payment: %.2f\n", num_of_payments, balance );
  amount = balance;
  }
/*  balance = (amount - payment) + amount * increase_rate;*/
  /*printf ( "Balance remaining after second payment: %.2f\n", balance );*/
  /*amount = balance;*/
  /*balance = (amount - payment) + amount * increase_rate;*/
  /*printf ( "Balance remaining after third payment: %.2f\n", balance );*/


  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */



