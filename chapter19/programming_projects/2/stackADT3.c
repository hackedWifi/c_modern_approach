/*
 * =====================================================================================
 *
 *       Filename:  stackADT2.c
 *
 *    Description:  A stack implementation using a linked-list . 
 *
 *        Version:  1.0
 *        Created:  05/25/2021 02:01:00 PM
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

static void terminate(char *message);
struct node {
  Item data;
  struct node *next;
};

struct stack_type {
  struct node *top;
};


static void terminate(char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);

}

Stack create()
{
  Stack s = malloc(sizeof(struct stack_type));
  if(s == NULL)
    terminate("Error in create: Cannot allocate memory.");
  s->top = NULL;
  return s;

} 
void destroy(Stack s)
{
  make_empty(s);
  free(s);
}


void make_empty(Stack s)
{
  while(!is_empty(s))
    pop(s);
}

bool is_empty(Stack s)
{
  return s->top == NULL;
}

bool is_full(Stack s)
{
  return false;
}

void push(Stack s, Item i)
{
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  if(new_node == NULL)
    terminate("Error in push: Cannot allocate memory.");
  new_node->data = i;
  new_node->next = s->top;
  s->top = new_node;

}

Item pop(Stack s)
{
  struct node *old_top;
  Item i;
  if(is_empty(s))
    terminate("Error in pop: stack is empty.");
  old_top = s->top;
  i = old_top->data;
  s->top = old_top->next;
  free(old_top);
  return i;
  
}

Item peek(Stack s)
{
  if(is_empty(s))
    terminate("Error in peep: stack is empty.");
  return s->top->data; 

}
