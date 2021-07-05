/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  The following functions is supposed to return true if any element of
 *                  the array a has the value 0 and false if all elements are nonzero.
 *                  Sadly, it contains an error. Find the error and show how to fix it:
 *
 *        Version:  1.0
 *        Created:  12/03/2020 10:54:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
bool has_zero(int a[], int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int n = 9;
    int a[9] = {1,0,1,1, 1,1,1,1, 1};
    printf("%d ", has_zero(a, n));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
bool has_zero(int a[], int n)
{
    int i;
    for (i = 0; i < n; i++)
    {
        if (a[i] == 0)
            return true;
        /*else */
            /*return false;*/
// I fixed the error by removing the else clause. Otherwise, the loop will stop as soon
// as it finds that a[i] has 1. Without the else clause the loops continues until the end
//
    }
    printf("%d ", i);
    return false;
}
