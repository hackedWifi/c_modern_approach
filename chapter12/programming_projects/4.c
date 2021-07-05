/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  (a) Write a program that reads a message, then checks whether it's a
 *                  palindrome (the letters in the message are the same from left to 
 *                  right as from right to left.
 *                  Ignore all charactes that aren't letters. Use integers to keep track
 *                  of positions in the array.
 *
 *                  (a) Revise the program to use pointers instead of integers to keep 
 *                  track of positions in the array.
 *        Version:  1.0
 *        Created:  02/24/2021 04:34:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#define SIZE 100
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char message[SIZE];
    char *p = message, *q, c ;

    printf("Enter a message: ");
    while(( c = getchar()) != '\n' && p < message + SIZE - 1)
        {
            if(isalpha(c))
                *p++ = c;

        }

    
    p--;
    for ( q = message ; q < p; q++, p-- ) {
        if( *p != *q) 
        {
            printf("Not a palindrome ");
            return 0;
        }

   }
        printf("Palindrome ");
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
