/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  Modify Programming Project 6 from Chapter 10 so that it includes the
 *                  following function:
 *                  int evaluate_RPN_expression(const char *expression);
 *
 *                  The function returns the value of the RPN expression pointed to by
 *                  expression.
 *
 *        Version:  1.0
 *        Created:  03/29/2021 03:58:33 PM
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
#include <ctype.h>
#include "stack.h"
void process_character(char c);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */



int main ( int argc, char *argv[] )
{
  int o1, o2;
  char c ; 
  while(true){
  printf ( "Enter an RPN expression: " );
    while((c = getchar()) != '\n')  
    {
    if(isdigit(c))
      push(c - '0');
    else { 
      switch (c) {
        case '+':	
          push(pop()+  pop());
          break;
        case '-':	
          o1 = pop();
          o2 = pop();
          push(o2 - o1);
          break;
        case '*':	
          push( pop() * pop());
          break;
        case '/':
          o1 = pop();
          o2 = pop();
          push(o2 / o1);;
          break;
        case '=':
          printf("Value of the stack is: %d\n" , pop());
          break;
        case ' ':
          break;
        default:	
          exit(EXIT_SUCCESS);
    }
  }
}
}
  return EXIT_SUCCESS;
  }

