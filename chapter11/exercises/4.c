/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Write a function tha when passed the addresses of two variables, 
 *                  swap should exbhange the values of the variables.
 *
 *        Version:  1.0
 *        Created:  01/06/2021 10:25:38 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
void swap(int*, int*);
int main ( int argc, char *argv[] )
{
    int a, b;
    a = 1, b = 2;
    swap(&a, &b);
    printf("The value of a is: %d\n", a);
    printf("The value of b is: %d\n", b);

    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  swap
 *  Description:  
 * =====================================================================================
 */
void swap ( int *p, int *q )
{
    int temp = *p;
    *p = *q;
    *q = temp;
}		/* -----  end of function swap  ----- */
