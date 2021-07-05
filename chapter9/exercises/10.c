/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Write functions that return the following values (Assume that a and
 *                  n are parameters, wherea is an array of int values and n is the 
 *                  length of the array)
 *                  a) the largest element in a.
 *                  b) the average of all elements in a.
 *                  c) The number of positive elements in a.
 *
 *        Version:  1.0
 *        Created:  11/30/2020 09:54:00 PM
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
int largest(int n, int a[n] );
int average(int n, int a[n] );
int total_positive_num(int n, int a[n]  );


    /* 
     * ===  FUNCTION  ======================================================================
     *         Name:  main
     *  Description:  
     * =====================================================================================
     */
int main ( int argc, char *argv[] )
{
    int n = 10;
    int a[] = { -1, 3 , 15, 6, 7,
                -9, -8 , -12, 11 ,10};
    
    printf("%d ", total_positive_num(n, a));
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int largest(int n, int a[n]  ) 
{

   int max = 0; 
    for(int i = 0; i < n; i++) {
    int temp = a[i];
        if(temp > max){
           max = a[i];
        }
    }
    return max;
}

int average(int n, int a[n]) 
{
    int total = 0;
    for(int i = 0; i < n; i++) {
    
        total += a[i];
    }
    return total / n;
}

int total_positive_num(int n, int a[n]) 
{
    int total = 0;
    for(int i = 0; i < n; i++) {
    
        if(a[i] > 0)
        {
            total++;
        }
    }
    return total;
}
