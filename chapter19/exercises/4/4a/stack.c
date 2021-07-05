/*
 * =====================================================================================
 *
 *       Filename:  stack.c
 *
 *    Description:  Array implementation of a stack  
 *
 *        Version:  1.0
 *        Created:  05/24/2021 03:27:15 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <stdio.h>
#include "../stack.h"

#define STACK_SIZE 100
static void terminate(char *message);
struct stack_type {
  Item contents[STACK_SIZE];
  Item top;
  
};

static void terminate(char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

Stack create(void)
{
  Stack s = malloc(sizeof(struct stack_type));
  if(s == NULL)
    terminate("Error in create: Cannot allocate memory.");
  s->top = 0;
  return s;
}

void destroy(Stack s)
{
  free(s);
}

void make_empty(Stack s)
{
  s->top = 0;
}

void push(Stack s, Item i)
{
  if(is_full(s))
    terminate("Error in push: Stack is full.");
  s->contents[s->top++] = i;

}
Item pop(Stack s)
{
  if(is_empty(s))
    terminate("Error in pop: Stack is empty.");
  return s->contents[--s->top];
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == STACK_SIZE;
}


