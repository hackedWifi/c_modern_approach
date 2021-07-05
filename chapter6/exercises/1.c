/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  What output does the following program output?  
 *
 *        Version:  1.0
 *        Created:  09/24/2020 02:45:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

    int i = 1;
    while (i <= 128) {
        printf("%d ", i);
        i *=2;
    }

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


