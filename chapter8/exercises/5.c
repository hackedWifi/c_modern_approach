/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  A fibonacci program fragment that declares an array named fib_numbers
 *                  of length 40 and fills the array with the first 40 Fibonacci numbers.
 *
 *        Version:  1.0
 *        Created:  10/19/2020 08:31:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int main(void) {
  int fib_num[40] = {0,1};
  int i;

  
  for ( i = 2; i < 40; i++ ) {
    fib_num[i] = fib_num[i -1] + fib_num[i - 2] ;
    printf("%d\n", fib_num[i]);
  }
   
  return 0;

}
