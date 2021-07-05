/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Modify the find_middle function from section 11.5 so that it uses 
 *                  pointer arithmetic to calculate the return value.
 *
 *        Version:  1.0
 *        Created:  02/14/2021 08:37:11 PM
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


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  *find_middle
 *  Description:  
 * =====================================================================================
 */
int *find_middle ( int *a, int n );
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    
        return EXIT_SUCCESS;
}

int *find_middle( int a[], int n )
{
    int middle = n / 2;
    return a + middle;

}				/* ----------  end of function main  ---------- */
