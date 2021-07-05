/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Modify the find_largest function so that it uses pointer arithmetic
 *                  ―not subscripting─to visit array elements.
 *
 *        Version:  1.0
 *        Created:  02/15/2021 11:03:51 PM
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

int find_largest ( int *a, int n );
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int n = 5;
    int a[5] = { 87, 33, 15 ,66 ,1};
    printf("Max is: %d", find_largest(a, n));
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  find_largest
 *  Description:  
 * =====================================================================================
 */
/*int find_largest(int a[], int n) {*/

    /*int *p = a;*/
    /*int largest = *p++;*/

    /*while (p++ < a + (n -1)) {*/
        /*if (*p > largest) {*/
            /*largest = *p;*/
        /*}*/
    /*}*/
    /*return largest;*/
/*}*/
int find_largest ( int *a, int n )
{
    int *p = a;
    int max = *p;
 
    
    for(p = a; p < a + n; p++) {
        if(max < *p) 
        {
            max = *p;
        }
    }
    return max;
}
