/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  The following function is supposed to insert a new node into its pro-
 *                  per place in an ordered list, returning a pointer to the first node
 *                  in the modified list. Unfortunately, the function doesn't work co-
 *                  rrectly in all cases. Explain what's wrong with it and show how to
 *                  fix it. Assume the node structure is the one defined in Section 17.5.
 *
 *                  struct node *insert_into_ordered_list(struct node *list, struct node
 *                                                        *new_node)
 *                    { 
 *                      struct node *cur = list, *prev = NULL;
 *                      while (cur->value <= new_node->value)
 *                      {
 *                      prev = cur;
 *                      cur = cur->next;
 *                      }
 *                      prev->next = new_node;
 *                      new_node->next = cur;
 *                      return list;
 *                    }
 *
 *
 *
 *        Version:  1.0
 *        Created:  05/05/2021 10:56:16 PM
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

struct node *insert_into_ordered_list(struct node *list, struct node *new_node);
/*void insert_into_ordered_list(struct node *list, struct node *new_node);*/
int main(void)
{
  struct node *first = NULL;
  struct node *new_node;

  // allocate memory for a new node
  new_node = malloc(sizeof(struct node));
  new_node->value = 50;
  new_node->next = first; // point to FIRST NODE  
  first = new_node; //point FIRST to new created node
  new_node = malloc(sizeof(struct node));
  new_node->value = 40;
  new_node->next = first; // point to FIRST NODE  
  first = new_node; //point FIRST to new created node
  new_node = malloc(sizeof(struct node));
  new_node->value = 60;
  /*first = insert_into_ordered_list(first, new_node);*/

  while(first != NULL)
  {
    printf("List new node value is: %d\n", first->value);
    first= first->next;
  }
}

struct node *insert_into_ordered_list(struct node *list, struct node
    *new_node)
{
  struct node *cur = list, *prev = NULL;
  while (cur != NULL && cur->value <= new_node->value)
  {
    prev = cur;
    cur = cur->next;
  }

  if(cur == NULL)
  {
    printf("it is here in if\n");
    cur->next = new_node;
    cur = new_node;
  }

  else if (prev == NULL)
  {
    printf("it is here in else if");
    list->next = cur;
    list = new_node;
  }
  else {
    printf("it is here in else");
    prev->next = new_node;
    new_node->next = cur;
  }
  return list;
}

// The current version of this function doesn't check when node->value is less that
// list->value. Also it creates an infinite loop because it doesn't check when curr is NULL.
// Also it return list which has been left unmodified within this function. It should
// return new_node.
//

// One solutions is to add a check for NULL in the controlling expression.
// then add an IF statement to check for boundaries

/*void insert_into_ordered_list(struct node *list, struct node *new_node)*/
/*{*/
  /*struct node **pp = &list;*/
  /*while (list != NULL) {*/
    /*if (list->value >= new_node->value)*/
      /*break;*/
  /*pp = &list->next;*/
  /*list = list->next;*/
/*}*/
/**pp = new_node;*/
/*new_node->next = list;*/
/*}*/
