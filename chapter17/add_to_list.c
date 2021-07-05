/*
 * =====================================================================================
 *
 *       Filename:  add_to_list.c
 *
 *    Description:  Inserts a node into a linked list 
 *
 *        Version:  1.0
 *        Created:  05/02/2021 02:35:32 PM
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
#include "struct_node.h"
struct node *add_to_list(struct node *list, int n)
{
  struct node *new_node;
  new_node = malloc(sizeof(struct node));
  if(new_node == NULL)
  {
    printf("Error: malloc failed in add_to_list\n");
    exit(EXIT_FAILURE);
  }
  new_node->value = n;
  new_node->next = list;
  return new_node;
} 

