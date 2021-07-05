/*
 * =====================================================================================
 *
 *       Filename:  search_list.c
 *
 *    Description:  Searches a list for an integer n. 
 *
 *        Version:  1.0
 *        Created:  05/02/2021 02:42:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "struct_node.h"
#include <stdlib.h>
struct node *search_list(struct node *list, int n)
{
  
  for ( ; list != NULL; list = list->next ) {
    if(list->value == n)
      return list;
  }
  return NULL;

}

struct node *delete_from_list(struct node *list, int n)
{
  struct node *cur, *prev;

  for ( cur = list, prev = NULL; cur != NULL && cur->value != n; prev = cur, cur = cur->next ) {
    ;
  }
  if(cur == NULL)
    return list; /* n was not found */
  if(prev == NULL)
    list = list->next; /* n is in the first node */
  else
    prev->next = cur->next; /* n is in some other node */
  free(cur);
  return list;

}


