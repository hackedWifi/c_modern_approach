/*
 * =====================================================================================
 *
 *       Filename:  quicksort.c
 *
 *    Description:  Sort an array of elements using the quicksort algorithm.
 *
 *        Version:  1.0
 *        Created:  04/15/2021 02:02:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include "quicksort.h"

void quicksort(int a[], int low, int high)
{
  int middle;
  if(low >= high) return;
  middle = split(a, low, high);
  quicksort(a, low, middle - 1);
  quicksort(a, middle + 1, high);
}

int split(int a[], int low, int high)
{
  int part_element = a[low];

  for ( ; ;  ) {
    while ( low < high && part_element <= a[high] ) {
      high--;
    }

    if ( low >= high ) {
      break;
    }
    a[low++] = a[high];
    while ( low < high && a[low] <= part_element) {
      low++;
    }

    if ( low >= high ) {
      break;
      }
      a[high--] = a[low];
  }

  a[high] = part_element;
  return high;
}

