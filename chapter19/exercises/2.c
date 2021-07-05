/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Modify the stack2.c file to use the PUBLIC and PRIVATE macros 
 *
 *        Version:  1.0
 *        Created:  05/20/2021 09:23:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#define PUBLIC
#define PRIVATE static

#include <stdio.h>
#include <stdlib.h>
#include "stack.h"

struct node {
  int data;
  struct node *next;
};

PRIVATE struct node *top = NULL;

PRIVATE void terminate(const char *message)
{
  printf("%s\n", message);
  exit(EXIT_FAILURE);
}

PUBLIC void make_empty(void)
{
  while(!is_empty())
    pop();
}

PUBLIC bool is_empty(void)
{
  return top == NULL;
}

PUBLIC bool is_full(void)
{
  return false;
}

PUBLIC void push(int i)
{
  struct node *new_node = malloc(sizeof(struct node));
  if(new_node == NULL)
    terminate("Error in push: stack is full.");

  new_node->data = i;
  new_node->next = top;
  top = new_node;
}

PUBLIC int pop(void)
{
  struct node *old_top;
  int i;
  if(is_empty())
    terminate("Error in pop: stack is empty.");
  old_top = top;
  i = top->data;
  top = top->next;
  free(old_top);
  return i;
}
