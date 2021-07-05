/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Write a program that asks the user to enter a series of integers 
 *                  (which it stores in an array), then sorts the integers by calling 
 *                  the function selection_sort. When given an array with n elements, 
 *                  selection_sort must do the following:
 *
 *                  1. search the array to find the largest element, then move it to the 
 *                  last position array.
 *                  2. Call itself recursively to sort the first n - 1 elements of the 
 *                  array
 *
 *        Version:  1.0
 *        Created:  12/05/2020 09:49:13 PM
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
#define SIZE 5
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
void selection_sort(int arr[], int n);
int main ( int argc, char *argv[] )
{
    int n, ch = 0; 
    int a[SIZE];
    printf("Enter list of integers to be sorted");
    for ( int i = 0; i < SIZE; i++ ) {
        scanf(" %d" , &a[i] );
        n++;
        if((ch = getchar()) == '\n') break;
    }
    selection_sort(a, n);
    printf("Sorted array: ");
    for ( int i = 0; i < n; i++ ) {
        printf("%d", a[i]);
    }
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
void selection_sort(int arr[], int n)
{
    int i, max, temp = 0;
    max = 0;

    if(n == 0) return;
    for ( i = 0; i < n; i++ ) {
        if(arr[i] > arr[max]) {
            max = i;
                    }
    }
    temp = arr[max];
    arr[max] = arr[n - 1];
    arr[n-1] = temp;
       /*selection_sort(arr, n -1);*/
}
