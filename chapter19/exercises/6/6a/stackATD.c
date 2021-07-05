/*
 * =====================================================================================
 *
 *       Filename:  stackATD.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  05/24/2021 04:55:09 PM
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
#include "../stack.h"

#define STACK_SIZE 100      /*  */
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

void make_empty(Stack s)
{
  free(s);
}

bool is_empty(Stack s)
{
  return s->top == 0;
}

bool is_full(Stack s)
{
  return s->top == STACK_SIZE;
}

void push(Stack s, Item i)
{
  if(is_full(s))
    terminate("Error in push: stack is full.");
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
