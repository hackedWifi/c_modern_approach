/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/15/2021 02:58:41 PM
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
#include "stack.h"
#define STACK_SIZE 100            /*  */
char contents[STACK_SIZE];
int top = 0;

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
   exit(EXIT_FAILURE);
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
   exit(EXIT_FAILURE);
}		/* -----  end of function stack_overflow  ----- */


