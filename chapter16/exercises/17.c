/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  Suppose that b and i are declared as follows:
 *                  enum {FALSE, TRUE } b;
 *                  int i;
 *
 *                  Which of the following statements are legal? Which ones are "safe" 
 *                  (always yield a meaninful result)?
 *                  (a) b = FALSE;
 *                  (b) b = i;
 *                  (c) b++;
 *                  (d) i = b;
 *                  (e) i = 2 * b + 1;
 *
 *        Version:  1.0
 *        Created:  04/26/2021 11:38:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (a) is legal. It assigns 0 to the first element of b

// (b) legal but unsafe.  

// (c) it is meaninful. it adds 1 to either FALSE OR TRUE. But unsafe.

// (d) legal 
//
// (e) legal.

#include <stdio.h>
int main (void)
{
  enum {FALSE, TRUE } b;
  int i = 0;
  printf("The value is: %d", b = i);

}
