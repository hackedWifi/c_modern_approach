/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  A program that evaluates an expression from left to right 
 *                  ( no operator takes precedence over any other operator ).
 *
 *        Version:  1.0
 *        Created:  10/14/2020 04:08:00 PM
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
  float l_operand = 0.0 ;
  float result = 0.0;

  char ch; 
  printf("Enter an expression to be evaluated: ");
  scanf("%f", &result);

  while( ( ch = getchar() ) != '\n' ) {
    switch ( ch ) {
      case '+':	
        scanf("%f", &l_operand);
        result += l_operand;
        break;

      case '-':	
         scanf("%f", &l_operand);
        result -= l_operand;
        break;

      case '*':	
         scanf("%f", &l_operand);
        result *= l_operand;
        break;

      case '/':	
        scanf("%f", &l_operand);
        result /= l_operand;
        break;
      default:
        printf("Please enter a valid operator");
        break;
    }
  }
  printf("Value of expression: %.2f", result);

  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


