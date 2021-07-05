/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  Modify the delete_from_list function (Section 17.5) so that its first
 *                  parameter hs type struct node ** (a pointer to the first node in a 
 *                  list) and its return type is void. delete_from_list must modify its
 *                  first argument to point to the list after the desired node has been
 *                  deleted.
 *
 *        Version:  1.0
 *        Created:  05/07/2021 03:22:20 PM
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

struct node {
  int value;
  struct node *next;
};
void delete_from_list(struct node **list, int n);
/*struct node *delete_from_list(struct node *list, int n);*/
int main(void)
{
  struct node *first = NULL;
  struct node *new_node;

  // allocate memory for a new node
  new_node = malloc(sizeof(struct node));
  new_node->value = 50;
  new_node->next = NULL; // point to FIRST NODE  
  first = new_node; //point FIRST to new created node
  new_node = malloc(sizeof(struct node));
  new_node->value = 40;
  new_node->next = first;
  first = new_node; //point FIRST to new created node
  new_node = malloc(sizeof(struct node));
  new_node->value = 10;
  new_node->next = first; // point to FIRST NODE  
  first = new_node;
new_node = malloc(sizeof(struct node));
  new_node->value = 15;
  new_node->next = first; // point to FIRST NODE  
  first = new_node;
  /*first = insert_into_ordered_list(first, new_node);*/
  /*delete_from_list(&first, 10);*/

  while(first != NULL)
  {
    printf("List new node value is: %d\n", first->value);
    first= first->next;
  }
}
void delete_from_list(struct node **list, int n)
{
  struct node *item = *list;
  while(item)
  {
    if(item->value == n)
    {
      *list = item->next;
      free(item);
      break;
    }
  list = &item->next;
  item = item->next;

  }
}
/*struct node *delete_from_list(struct node *list, int n)*/
/*{*/

  /*struct node *cur, *prev;*/
  /*for(cur = list, prev = NULL; cur != NULL && cur->value != n;*/
      /*prev = cur, cur = cur->next)*/
  /*{*/
    /*;*/
  /*}*/
  /*if(cur == NULL)*/
    /*return list; // n was not found*/
  /*if(prev == NULL)*/
    /*list = list->next; // n is in the first node*/
  /*else*/
    /*prev->next = cur->next; //  n is in some other node*/
  /*free(cur);*/
  /*return list;*/
/*}*/
