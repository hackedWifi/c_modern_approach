/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Suppose the following declarations are in effect:
 *
 *                  struct point { int x, y; };
 *                  struct rectangle { struct point upper_left,
 *                                    struct point lower_right; }
 *                  struct rectangle *p;
 *                  
 *                  Assume tha we want p to point to a rectangle structure type whose u-
 *                  pper left corner is at (10,25) and whose lower right corner is (12,15)
 *                  Write a series of statements that allocate such a structure and ini-
 *                  tialize it as indicated.
 *
 *        Version:  1.0
 *        Created:  05/03/2021 10:10:34 PM
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
struct point { int x, y; };
struct rectangle { struct point upper_left,
                   lower_right; };
struct rectangle *p;

int main(void)
{
p = malloc(sizeof(struct rectangle));
if(p == NULL)
  printf("Error allocating memory\n");
p->upper_left.x = 10;
p->upper_left.y = 25;
p->lower_right.x = 12;
p->lower_right.y = 15;
}
