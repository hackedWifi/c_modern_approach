/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Write the following function:
 *                  bool search(const int a[], int n, int key);
 *                  a is an array to be searched, n is the number of elements in the 
 *                  array, and key is the search key, search should return true if
 *                  key matches some element of a, and false if it doesn't. Use pointer
 *                  arithmetic─not subscripting─to visit array elements.  
 *
 *        Version:  1.0
 *        Created:  02/13/2021 10:15:07 PM
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
bool search (const int a[], int n, int key );
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int n = 5, a[] = { 10,20,20,30,40}, key = 36;
    bool result = search(a, n, key);
 printf ( "%d\n", result );   
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  search
 *  Description:  
 * =====================================================================================
 */

bool search (const int a[], int n, int key )
{
    const int *p ;

    
    for ( p = a; p < a + n;p++ ) {
        if(key == *p) return true;
    }
        return false;

}		/* -----  end of function search  ----- */
				/* ----------  end of function main  ---------- */
