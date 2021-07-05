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
#include <stdlib.h>
#include "stack.h"
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main (void)
{
   Stack q1;
   int n;
   q1 = create();

   push(q1, 1);
   push(q1, 2);
   push(q1, 12);
   /*push(q1, 3);*/

   printf("top item in Stack: %d\n", peek(q1));
   printf("Items in the Stack: %d\n", length(q1));
   n = pop(q1);
   printf("Popped %d from q1\n", n);
   printf("Items in the Stack: %d\n", length(q1));
   n = pop(q1);
   printf("Popped %d from q1\n", n);
   printf("Items in the Stack: %d\n", length(q1));
   make_empty(q1);



return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
