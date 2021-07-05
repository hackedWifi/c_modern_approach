/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  Let b an array of 100 integers. Write a call of qsort that sorts only 
 *                  the last 50 elementes in a (You don't need to write comparasion func-
 *                  tion);
 *
 *        Version:  1.0
 *        Created:  05/08/2021 03:14:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int compare(const void *p, const void *q);

int main(void)
{
  int arr[100];
  for(int i = 0; i < 100; i++)
  {
    arr[i] = rand() % 100;
  }
  
qsort(&arr[50], ((int) (sizeof(arr) / sizeof(arr[0])/2)), sizeof(arr[0]),compare);
  for(int i = 50; i < 100; i++)
  {
    printf("arr is at %d: %d\n", i, arr[i]);
  }/*printf("%d", ( (int) (sizeof(arr) / sizeof(arr[0])/2)));*/
}

int compare(const void *p, const void *q)
{
  const int *p1 = p;
  const int *q1 = q;
  if( *p1 < *q1)
    return -1;
  else if (*p1 == *q1)
    return 0;
  else
    return 1;

}
