/*
 * =====================================================================================
 *
 *       Filename:  stackADT2.c
 *
 *    Description:  A stack implementation using a dynamic array. 
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
struct stack_type {
  Item *contents;
  Item top;
  int size;
};

static void terminate(char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);

}

Stack create(int size)
{
  Stack s = malloc(sizeof(struct stack_type));
  if(s == NULL)
    terminate("Error in create: Cannot allocate memory.");
  s->contents = malloc(sizeof(Item) * s->size);
  if(s->contents == NULL)
  {
    free(s);
    terminate("Error in create: stack cannot be created.");
  }
  s->top = 0;
  s->size = size;
  return s;

} 
void destroy(Stack s)
{
  free(s->contents);
  free(s);
}


void make_empty(Stack s)
{
  s->top = 0;
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == s->size;
}

void push(Stack s, Item i)
{
  if(is_full(s))
  {
    s->size *= 2;
    s->contents = realloc(s->contents, s->size * sizeof(Item));
    if(s->contents == NULL)
      terminate("Error in push: cannot reallocate memory.");
  }
  s->contents[s->top++] = i;

}

Item pop(Stack s)
{
  if(is_empty(s))
    terminate("Error in pop: stack is empty.");
  return s->contents[--s->top];
}

Item peek(Stack s)
{
  if(is_empty(s))
    terminate("Error in peep: stack is empty.");
  return s->contents[s->top - 1]; 

}
