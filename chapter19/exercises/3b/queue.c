/*
 * =====================================================================================
 *
 *       Filename:  queue.c
 *
 *    Description:  Implementation of a dynamically queue using a linked list. 
 *
 *        Version:  1.0
 *        Created:  05/23/2021 03:22:36 PM
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
#include "queue.h"

struct node {
  Item data;
  struct node *next;

};

struct queue_type {
  struct node *first;
  struct node *last;
};

static void terminate(char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Queue create(void)
{
  Queue q = malloc(sizeof(struct queue_type));
  if(q == NULL){
    terminate("Error in create: memory couldn't be allocated.");
  }
  q->first = NULL;
  q->last = NULL;
  return q;

}

void enqueue(Queue q, Item i)
{
  struct node *new_node = malloc(sizeof(struct node));
  if(new_node == NULL)
  {
    terminate("Error in enqueue: memory couldn't be allocated.");
  }
  if(q->last == NULL) {
    q->last = new_node;
}
  else {
    q->first->next = new_node;
}
  new_node->data = i;
  q->first = new_node;

}

Item dequeue(Queue q)
{
  struct node *old;
  Item i;
  if(is_empty(q))
      terminate("Error in pop: queue is empty.");
  old = q->last;
  i = q->last->data;
  q->last = q->last->next;
  
  free(old);
  return i;

}

Item peek_first(Queue q)
{
  if(is_empty(q))
      terminate("Error in peek_first: queue is empty.");
  return q->last->data;

}

Item peek_last(Queue q)
{
  if(is_empty(q))
      terminate("Error in peek_last: queue is empty.");
  return q->first->data;
}

bool is_empty(Queue q)
{
  return q->last == NULL;
}
