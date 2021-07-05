/*
 * =====================================================================================
 *
 *       Filename:  queueclient.c
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
#include "queue.h"


#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( void )
{
   Queue q1, q2;
   int n;
   q1 = create();
   /*q2 = create();*/

   enqueue(q1, 1);
   enqueue(q1, 2);
   enqueue(q1, 6);
   enqueue(q1, 14);
   printf("First item in queue: %d\n", peek_first(q1));
   printf("Last item in queue: %d\n", peek_last(q1));
   n = dequeue(q1);
   printf("Popped %d from q1\n", n);
   printf("First item in queue: %d\n", peek_first(q1));
   printf("Last item in queue: %d\n", peek_last(q1));
   /*enqueue(q2, n);*/
   n = dequeue(q1);
   n = dequeue(q1);
   n = dequeue(q1);
   printf("Popped %d from q1\n", n);
   /*printf("First item in queue: %d\n", peek_first(q1));*/
   printf("Last item in queue: %d\n", peek_last(q1));
   /*enqueue(q2, n);*/
   /*destroy(q1);*/


   /*enqueue(q2, 3);*/
   /*n = dequeue(q2);*/
   /*printf("Popped %d from q2\n", n);*/
   /*n = dequeue(q2);*/
   /*printf("Popped %d from q2\n", n);*/
   /*n = dequeue(q2);*/
   /*printf("Popped %d from q2\n", n);*/
   /*n = dequeue(q2);*/
   /*printf("Popped %d from q2\n", n);*/

   /*destroy(q2);*/

return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
