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
   char *n;
   q1 = create();

   push(q1, "hello");
   push(q1, "hi");
   push(q1, "how");
   /*push(q1, 3);*/

   printf("top item in Stack: %s\n",  (char *) peek(q1));
   n = pop(q1);
   printf("Popped %s from q1\n",  n);
   n = pop(q1);
   printf("Popped %s from q1\n",  n);
   make_empty(q1);



return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
