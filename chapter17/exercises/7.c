/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  The following loop is supposed to delete all nodes from a linked 
 *                  list and release the memory that they occupy. Unfortunately, the 
 *                  loop is incorrect. Explain what's is wrong with it and show how to
 *                  fix it.
 *
 *                  for (p = first; p != NULL; p = p->next)
 *                    free(p);
 *
 *        Version:  1.0
 *        Created:  05/05/2021 02:56:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
// the first call to free(p) will delete the node that p points to. Making the rest of 
// the node a dangling ones. A solution is to create a temporarily struct pointer that will
// store the address of the p->next.
//
p = list;
struct node *temp;

while(p != NULL)
  temp = p;
  p = p->next;
  free(temp);
