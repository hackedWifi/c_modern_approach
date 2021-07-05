/*
 * =====================================================================================
 *
 *       Filename:  20.c
 *
 *    Description:  Suppose that the direction variable is declared in the following way:
 *                  enum { NORTH, SOUTH, EAST, WEST } direction;
 *                  let x and y be int variable. Write a switch statement that tests the
 *                  value of direction, incrementing x if direction is EAST, decrementing
 *                  x if direction is WEST, incrementing y if direction is SOUTH, and de-
 *                  crementing y if direction is NORTH.
 *
 *        Version:  1.0
 *        Created:  04/27/2021 10:45:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void)
{

enum { NORTH, SOUTH, EAST, WEST } direction;
direction = 0;
int x = 0, y = 0;
switch (direction) {
  case NORTH:	
    y--;
    break;

  case SOUTH:	
    y++;
    break;

  case EAST:	
    x++;
    break;
  case WEST:
    x--;
    break;
  default:	
    return 0;
}				/* -----  end switch  ----- */
printf("Value of x is: %d, and y is: %d\n", x, y);
}
