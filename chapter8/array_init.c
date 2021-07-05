/*
 * =====================================================================================
 *
 *       Filename:  array_init.c
 *
 *    Description:  Shows how to initialize an array. 
 *
 *        Version:  1.0
 *        Created:  10/18/2020 08:50:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#define ARRAY_ELEM 10
int main(void) 
{
  int arr[ARRAY_ELEM] = {!0, [8] = 1};

  for(int i = 0; i < ARRAY_ELEM; i++) 
  {
    printf("Array elements initialize to: %d \n", arr[i]);
  }
}
