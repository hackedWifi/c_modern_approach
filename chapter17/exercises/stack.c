/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:  Section 15.2 describes a file, stack.c, that provides functions for
 *                  storing integers in a stack. In that section, the stack was imple-
 *                  mented as an array. Modify stack.c so that a stack is now stored as 
 *                  a linked list. Replace the contents and top variables by a single
 *                  variable that points to the first node in the list (the top of the
 *                  stack). Write the functions in stack.c so that they use this pointer
 *                  Remove the is_full function, instead having push return either true
 *                  (if memory was availabe to create a node) or false (if not).
 *
 *
 *        Version:  1.0
 *        Created:  05/05/2021 02:58:41 PM
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

struct node {
  int content;
  struct node *next;
};

struct node *top = NULL;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  make_empty
 *  Description:  
 * =====================================================================================
 */
  void
make_empty ( void )
{
  struct node *tmp;
  while(top)
  {
    tmp = top;
    top = top->next;
    free(tmp);
  }

}		/* -----  end of function make_empty  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  is_empty
 *  Description:  
 * =====================================================================================
 */
bool is_empty ( void )
{
  return top == NULL;
}		/* -----  end of function is_empty  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  push
 *  Description:  
 * =====================================================================================
 */
bool push (int i )
{
  struct node *new;
  malloc(sizeof(struct node ));
  if(new == NULL) return false;
  new->content = i;
  new->next = top;
  top = new;
  return true;

}		/* -----  end of function push  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  pop
 *  Description:  
 * =====================================================================================
 */
int pop ( void )
{
  int i;
  struct node *tmp;
  if (is_empty())
    return stack_underflow();
  else
  {
    i = top->content;
    tmp = top;
    top = tmp->next;
    free(tmp);
  }    
    
    return i;

}		/* -----  end of function pop  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  stack_underflow
 *  Description:  
 * =====================================================================================
 */
int stack_underflow ( void )
{
  printf ( "Stack is empty \n" );;
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


