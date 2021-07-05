/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Write the following function:
 *                  
 *                  int count_ocurrences(struct node *list, int n);
 *
 *                  The list parameter points to a linked list; the function should re-
 *                  turn the number of times that n appears in this list. Assume that the
 *                  node structure is one defined in Section 17.5.
 *
 *        Version:  1.0
 *        Created:  05/05/2021 10:06:19 PM
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

int count_ocurrences(struct node *list, int n)
{
  int count;
  while(list)
  {
    if(list->value == n)
      count++;
    list = list->next;
}
  return count;

}
