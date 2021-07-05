/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  A queue is similar to a stack, except that items are added at one 
 *                  end but removed from the other in a FIFO (first in, first out) fa-
 *                  shion. Operations a on a queue might include:
 *
 *                  Inserting an item at the end of the queue.
 *                  Removing an item from the beginning of the queue.
 *                  Returning the first item in the queue (without changing the queue)
 *                  Returning the last item in the queue (without changing the queue)
 *                  Testing whether the queue is empty.
 *
 *                  Write an interface for a queue module in the form o a header file
 *                  named queue.h
 *
 *        Version:  1.0
 *        Created:  05/20/2021 03:44:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#ifndef  queue_INC
#define  queue_INC
#include <stdbool.h>

typedef struct queue_type *Queue;
typedef int Item;

Queue create(int size);
void destroy(Queue q);
Item peek_last(Queue q);
Item peek_first(Queue q);
//void make_empty(Queue q);
bool is_empty(Queue q);
//bool is_full(Queue q);
void enqueue(Queue q, Item);
Item dequeue(Queue q);

#endif   /* ----- #ifndef queue_INC  ----- */
