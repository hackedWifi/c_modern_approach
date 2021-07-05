/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Write a function num_of_digits(n) that returns the number of digits
 *                  in n ( positive integer )
 *
 *        Version:  1.0
 *        Created:  11/28/2020 09:05:30 PM
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
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int num_of_digits(int n);
int main ( int argc, char *argv[] )
{
    printf("%d ", num_of_digits(1800)); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  num_of_digits
 *  Description:  
 * =====================================================================================
 */
int num_of_digits ( int n )
{
    int num_of_digits = 0;
    while( n != 0) 
    {
        n = n / 10;
        num_of_digits++; 
    }

    return num_of_digits;
}		/* -----  end of function num_of_digits  ----- */
