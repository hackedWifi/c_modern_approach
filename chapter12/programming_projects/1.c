/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  (a) Write a program that reads a message, then prints the reversal 
 *                  of the message: 
 *                  Enter a message: Don't get mad, get even.
 *                  Reversal is: .neve teg ,dam teg t'noD
 *                  HINT: read the message one character at a time (using getchar()) and
 *                  store the characters in an array. Stop reading when the array is full
 *                  or the character read is '\n'.
 *
 *                  (b) Revise the program to use a pointer instead of an integer to keep
 *                  track of the current position in the array.
 *
 *
 *        Version:  1.0
 *        Created:  02/22/2021 08:39:06 PM
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
#define SIZE ((int) (sizeof(message) / sizeof(message[0])))

void reverse_array(char *a, int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char message[100] = {0}; 
    char c , *p = message;

    printf("Enter a message: ");
    while( ( c = getchar() ) != '\n' && p < message + SIZE - 1)
    {
        *p++ = c;
    }
    
    printf("Reversal is: ");
    for ( p = message + SIZE - 1 ;p >= message; p-- ) {
        putchar(*p);
    }
    putchar('\n');

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
