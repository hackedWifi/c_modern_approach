/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  (a) Write a function named capitalize that capitalizes all letter in its
 *                  argument. The argument will be a null-terminated string containing
 *                  arbitrary characters, not just letters. Use array subscripting to 
 *                  access the characters in the string. HINT: Use the toupper function
 *                  to convert each character to upper-case
 *                  (b) Rewrite the capitalize function, this time using pointer arithmetic
 *                  to access characters in the string.
 *
 *        Version:  1.0
 *        Created:  03/04/2021 01:58:14 PM
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

#define N 80
void capitalize(char arr[]);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char arr[N] = "how is 12gus?";
    capitalize(arr);
    puts(arr);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  capitalize
 *  Description:  
 * =====================================================================================
 */
void capitalize ( char arr[])
{
    char *p = arr;
    while ( *p++ != '\0' ) {
        *p = toupper(*p);

    }
 }		/* -----  end of function capitalize  ----- */
