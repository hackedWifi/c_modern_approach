/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  Show the output of the following program and explain what it does. 
 *
 *        Version:  1.0
 *        Created:  05/07/2021 04:24:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int f1(int (*f) (int));
int f2(int i);

int main(void)
{
  printf("Answer: %d\n", f1(f2));
  return 0;
}

int f1(int (*f) (int))
{
  int n = 0;
  while ((*f) (n)) n++;
  return n;
}

int f2(int i)
{
  return i * i + i - 12;

}
