/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  Modify Programming Project 2 from Chapter 12 so that it includes the 
 *                  following function:
 *
 *                  bool is_palindrome(const char *message);
 *
 *                  The function returns true if the string pointed to by message is a
 *                  palindrome
 *
 *        Version:  1.0
 *        Created:  04/03/2021 04:09:03 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


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
#include <string.h>
#include <stdbool.h>
#define SIZE 100

bool is_palindrome(const char *message);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char message[SIZE], c ;
    int i = 0;

    printf("Enter a message: ");
    while(( c = getchar()) != '\n' && i < SIZE -1)
        {
            if(isalpha(c))
              message[i++]   = toupper(c);

        }


    
    if(is_palindrome(message))
       printf("Palindrome ");
    else
       printf("Not a Palindrome ");

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


bool is_palindrome(const char *message) 
{

char const *p = message, *q = message + strlen(message) - 1;
for(;p<= q;)
{
    if(*p++ != *q--) return false;
}
return true;
}

