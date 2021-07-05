/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  Write the following function. The call sum(g,i, j) should return
 *                  g(i) + g(j).
 *
 *                  int sum(int (*f) (int), int start, int end);
 *
 *        Version:  1.0
 *        Created:  05/07/2021 04:47:12 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>
 int sum(int (*f) (int), int start, int end);
 int square(int n);

int main(void)
{
  printf("Sum is: %d", sum(square, 1, 5));

}
int sum(int (*f) (int), int start, int end)
{
  int result = 0;
 while(start <= end)
 {
  result += (*f)(start);
  start++;
}
 return result;
}

int square(int n)
{
  return n * n;
}
