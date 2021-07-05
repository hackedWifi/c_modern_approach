/*
 * =====================================================================================
 *
 *       Filename:  addfrac.c
 *
 *    Description:  Calculates two fractions.
 *
 *        Version:  1.0
 *        Created:  08/28/2020 10:15:06 PM
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
int lcm(int divisor, int dividend) {
  /** HINT: To reduce a fraction to lowest term, first compute the GCD of the numerator and */
  /*denominator. Then divide both the numerator and denominator by the GCD.*/
  int remainder = 0;
  int n = divisor;
  int d = dividend;

  while(d > 0) {

    remainder = n % d;
    n = d;
    d = remainder;

  }

  /*printf("GCD is: %d", n);*/
  printf("In lowest terms: %d/%d\n", divisor/n, dividend/n);

  return 0;

}

int main ( int argc, char *argv[] )
{
  int num1, denom1, num2, denom2, result_num, result_denom  = 0;
  char sign;
  printf ( "Enter two fractions seperated by a sign (+,-,*,/): " );
  scanf("%d/%d%c%d/%d", &num1, &denom1, &sign , &num2, &denom2);

  switch ( sign ) {
    case '+':	
      result_num = num1 * denom2 + num2 * denom1;
      result_denom = denom1 * denom2;
      break;

    case '-' :	
      result_num = num1 * denom2 - num2 * denom1;
      result_denom = denom1 * denom2;
      break;

    case '*':	
      result_num = num1 * num2;
      result_denom = denom1 * denom2;
      break;

    case '/':	
      result_num = num1 * denom2;
      result_denom = num2 * denom1;
      break;
    default:	
      printf ( "Please enter a valid calculation: ");
      break;
  }				/* -----  end switch  ----- */


  /*printf ( "The total is: %d/%d\n", result_num, result_denom );*/
  lcm(result_num, result_denom);
  return EXIT_SUCCESS;
}


