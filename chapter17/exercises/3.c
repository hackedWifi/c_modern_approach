/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Write the following function:
 *
 *                  int *create_array(int n, int initial_value);
 *
 *                  The function should return a pointer to a dynamically allocated int
 *                  array with n members, each of which is initialized to initial_value.
 *                  The return value should be NULL if the array can't be allocated.
 *
 *        Version:  1.0
 *        Created:  05/03/2021 09:52:32 PM
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
int *create_array(int n, int initial_value);

int main(void) {
  int i;
  int *arr = create_array(20,2);
  for(i = 0; i  < 20;)
    printf("%d\n", arr[i++]);


}
int *create_array(int n, int initial_value)
{
  int *p = malloc(n * sizeof(*p));
  if(p == NULL)
    return NULL;
  for(int i = 0; i < n; i++)
    p[i] = initial_value;
  return p;

}


