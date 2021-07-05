/*
 * =====================================================================================
 *
 *       Filename:  queue.c
 *
 *    Description:  Implementation of queue. 
 *
 *        Version:  1.0
 *        Created:  05/21/2021 02:50:46 PM
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
#include "queueADT.h"
#define QUEUE_SIZE 100 

struct queue_type {
    Item contents[QUEUE_SIZE];
    int rem_next_ind;
    int items;
};

static void terminate(char *message)
{
    printf("%s\n", message);
    exit(EXIT_FAILURE);
}

Queue create(void) 
{
    Queue q = malloc(sizeof(struct queue_type));
    if(q == NULL)
        terminate("Error in crate: queue couldn't be created");

    q->rem_next_ind = 0;
    q->items = 0;
    return q;
}

void destroy(Queue q)
{
    free(q);
}

bool is_empty(Queue q)
{
    return q->items == 0;
    }

void enqueue(Queue q, Item i)
{
    if(q->items == QUEUE_SIZE)
        terminate("Error in append: queue is full.");
    q->contents[q->items++]= i;

    if(q->items > QUEUE_SIZE)
    {
        q->items = 0;
    }
}

Item dequeue(Queue q)
{
    if(is_empty(q))
    {
        terminate("Error in remove: queue is empty.");
    }
    else
    {
        q->items--;
    }
    return q->contents[q->rem_next_ind++];

}

Item peek_first(Queue q)
{
    return q->contents[q->rem_next_ind];

}

Item peek_last(Queue q)
{
    if(is_empty(q))
        terminate("Queue is empty");
    return q->contents[q->items - 1];
}
