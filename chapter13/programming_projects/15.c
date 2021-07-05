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


#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define STACK_SIZE 100            /*  */

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int stack_overflow(void);
int stack_underflow(void);
char pop(void);
char contents[STACK_SIZE];
int top = 0;

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int o1, o2;
  printf ( "Enter an RPN expression: " );

  while(true){
  char c ; 
    scanf(" %c", &c);
    if(isdigit(c))
      push(c - '0');
    else { 
      switch (c) {
        case '+':	
          o1 = pop();
          o2 = pop();
          push(o2 + o1) ;

          break;
        case '-':	
          o1 = pop();
          o2 = pop();
          push(o2 - o1);
          break;

        case '*':	
          o1 = pop();
          o2 = pop();
          push(o2 * o1);
          break;

        case '/':
          o1 = pop();
          o2 = pop();
          push(o2 / o1);;
          break;
        case '=':
          printf("Value of the stack is: %d" , pop());
          break;
        default:	
          return EXIT_SUCCESS;
      }				/* -----  end switch  ----- */
    }
  }
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  make_empty
 *  Description:  
 * =====================================================================================
 */
  void
make_empty ( void )
{
  top = 0;
}		/* -----  end of function make_empty  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  is_empty
 *  Description:  
 * =====================================================================================
 */
bool is_empty ( void )
{
  return top == 0;
}		/* -----  end of function is_empty  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  is_full
 *  Description:  
 * =====================================================================================
 */
bool is_full ( void )
{
  return top == STACK_SIZE;
}		/* -----  end of function is_full  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  push
 *  Description:  
 * =====================================================================================
 */
void push ( int i )
{
  if (is_full())
    stack_overflow();
  else
    contents[top++] = i;
}		/* -----  end of function push  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  pop
 *  Description:  
 * =====================================================================================
 */
char pop ( void )
{
  if (is_empty())
    return stack_underflow();
  else
    return contents[--top];
}		/* -----  end of function pop  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  stack_underflow
 *  Description:  
 * =====================================================================================
 */
int stack_underflow ( void )
{
  printf ( "Not enough operands in the expression \n" );;
  return EXIT_FAILURE;
}		/* -----  end of function stack_underflow  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  stack_overflow
 *  Description:  
 * =====================================================================================
 */
int stack_overflow ( void )
{
  printf ( "Expression is too complex\n" );;
  return EXIT_FAILURE;
}		/* -----  end of function stack_overflow  ----- */

int evaluate_RPN_expression(const char *expression);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  evaluate_RPN_expression
 *  Description:  
 * =====================================================================================
 */
int evaluate_RPN_expression ( const char *expression )
{
  return 0;
}		/* -----  end of function evaluate_RPN_expression  ----- */
