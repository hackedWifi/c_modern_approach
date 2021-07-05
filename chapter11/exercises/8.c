/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Write the following function. 
 *                  int *find_largest(int a[], int n); When passed an array a of length
 *                  n, the function will return a pointer to the array's largest 
 *                  element.
 *
 *        Version:  1.0
 *        Created:  01/14/2021 10:09:26 AM
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
int *find_largest(int a[], int n); 
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
    {
        int n = 3;
    int arr[] = { 10, 30, 40 };
    
    printf ( "Largest %d\n", *find_largest(arr,  n));

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


int *find_largest(int a[], int n)
{
    int i;
    int *largest = &a[0];
    
    for ( i = 0; i < n; i++ ) {
        if(a[i] > *largest)
            
            largest = &a[i];
    }

            return largest;
}
