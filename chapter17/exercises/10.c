/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Modify the print part of Section 16.2 so that its parameter is a 
 *                  pointer to a part structure. Use the -> in your answer.
 *
 *        Version:  1.0
 *        Created:  05/05/2021 09:59:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

void print_part(struct part *p)
{
  printf("Part number: %d\n", p->number);
  printf("Part name: %s\n", p->name);
  printf("Quantity on hand: %d\n", p->on_hand);
}

