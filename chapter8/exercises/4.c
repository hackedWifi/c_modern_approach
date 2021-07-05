/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Write a declaration of an array named weekend containing seven bool
 *                  values, Include an initializer that makes the first and last values;
 *                  all others should be false.
 *
 *        Version:  1.0
 *        Created:  10/19/2020 08:06:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define SIZE (int) sizeof(weekend) / sizeof(weekend[0]) 
int main(void) {
  int weekend[7] = {1,[SIZE - 1] = 1};

  for( int i = 0; i < 7; i++ ) {
    printf("%d\n", weekend[i]);
    
  }
  return 0;
}
