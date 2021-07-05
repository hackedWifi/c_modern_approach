/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Modify the queue.h from exercise 1 so that it defines a Queue type,
 *                  where Queue is a structure containing a fixed-length array (see Exer-
 *                  cise 3a). Modify the functions in queue.h to take Queue * parameter
 *                  
 *
 *        Version:  1.0
 *        Created:  05/24/2021 04:39:52 PM
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
void make_empty(Queue q);
bool is_empty(Queue q);
/*bool is_full(Queue q);*/
void enqueue(Queue q, Item);
Item dequeue(Queue q);

#endif   /* ----- #ifndef queue_INC  ----- */

