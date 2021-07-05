/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  What will be the contents of the a array after the following 
 *                  statements are executed?
 *
 *        Version:  1.0
 *        Created:  02/10/2021 11:37:38 PM
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
#define N 10            /*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int a[N] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
    int *p = &a[1], *q = &a[N-1], temp;
        while(p < q)
        {
            temp = *p;
            *p++ = *q;
            *q-- = temp;
        }

        for ( int i = 0; i < N;i++ ) {
            printf("%d ", a[i]);
        }

    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
