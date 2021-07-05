/*
 * =====================================================================================
 *
 *       Filename:  Stackclient.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  05/21/2021 04:01:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "stack.h"


#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   Stack q1, q2;
   int n;
   q1 = create(2);
   q2 = create(4);

   push(q1, 1);
   push(q1, 2);
   /*push(q1, 3);*/

   printf("top item in Stack: %d\n", peek(q1));
   n = pop(q1);
   printf("Popped %d from q1\n", n);
   push(q2, n);
   n = pop(q1);
   printf("Popped %d from q1\n", n);
   push(q2, n);
   make_empty(q1);


   push(q2, 3);
   n = pop(q2);
   printf("Popped %d from q2\n", n);
   n = pop(q2);
   printf("Popped %d from q2\n", n);
   n = pop(q2);
   printf("Popped %d from q2\n", n);
   n = pop(q2);
   printf("Popped %d from q2\n", n);

   make_empty(q2);

return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
