/*
 * =====================================================================================
 *
 *       Filename:  reverse.c
 *
 *    Description:  Reverses a series of numbers 
 *
 *        Version:  1.0
 *        Created:  10/15/2020 10:11:14 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define N ((int) (sizeof(a) / sizeof(a[0])) )

int main(void) 
{
  int a[10], i;

  printf("Enter %d numbers: ", N);
  for(i = 0 ; i < N; i++) 
    scanf("%d", &a[i]);

  printf("In reverse order: ");
  for(i = N - 1; i >= 0; i--) 
    printf(" %d", a[i]);
  printf("\n");
  return 0;

}


