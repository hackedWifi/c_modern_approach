/*
 * =====================================================================================
 *
 *       Filename:  queue.h
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  05/20/2021 03:49:45 PM
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

Queue create(void);
void destroy(Queue q);
Item peek_last(Queue q);
Item peek_first(Queue q);
void make_empty(Queue q);
bool is_empty(Queue q);
//bool is_full(Queue q);
void enqueue(Queue q, Item);
Item dequeue(Queue q);

#endif   /* ----- #ifndef queue_INC  ----- */
