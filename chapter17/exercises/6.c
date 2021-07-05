/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Modify the delete_from_list function so that it uses only one pointer
 *                  variable instead of two (cur and prev).
 *
 *        Version:  1.0
 *        Created:  05/04/2021 10:45:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
struct node {
  int value;
  struct node *next;
};
struct node *delete_from_list(struct node **list, int n)
{
  struct node *item = *list; 
  while(item != NULL)
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
  return *list;


}
