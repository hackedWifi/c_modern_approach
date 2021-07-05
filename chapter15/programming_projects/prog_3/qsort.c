/*
 * =====================================================================================
 *
 *       Filename:  qsort.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/15/2021 02:15:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "quicksort.h"
#define N 10      /*  */

int main(void)
{
  int a[N], i;
  printf ( "Enter %d numbers to be sorted: ", N );

  for ( i = 0; i < N; i++ ) {
    scanf("%d", &a[i]);
  }
  quicksort(a, 0, N -1);
  printf ( "In sorted order: " );

  for ( i = 0; i < N; i++ ) {
    printf ( "%d ",  a[i] );
  }
  printf ( "\n" );
  return 0;

}
