/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  Write the following function:
 *
 *                  struct node *find_last(struct node *list, int)
 *                  
 *                  The list parameter points to a linked list. The function should re-
 *                  turn a pointer to the last node that contains n, it should return
 *                  NULL if n doesn't appear in the list. Assume that the node structure
 *                  is the one defined in Section 17.5.
 *
 *        Version:  1.0
 *        Created:  05/05/2021 10:14:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

struct node {
  int value;
  struct node *next;
};

struct node *find_last(struct node *list, int n)
{
  struct node *tmp = NULL;
  while(list)
  {
    if(list->value == n)
    {
      tmp = list;
    }
    list = list->next;
  }
  return tmp;
  

}
