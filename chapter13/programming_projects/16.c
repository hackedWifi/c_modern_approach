/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  Modify Programming Project 1 from Chapter 12 so that it includes the
 *                  following function:
 *
 *                  void reverse(char *message);
 *
 *                  The function reverses the string pointed to by message. Hint: Use two 
 *                  pointers, one initially pointing to the first character of the string
 *                  and the other initially pointing to the last character. have the 
 *                  function reverse these characters and then move the pointers toward 
 *                  each other, repeating the process until the pointers meet.
 *
 *        Version:  1.0
 *        Created:  04/03/2021 03:19:24 PM
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
#define SIZE ((int) (sizeof(message) / sizeof(message[0])))

void reverse(char *a);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char message[100] = {0}; 
    char c  ;
    int i = 0;

    printf("Enter a message: ");
    while( ( c = getchar() ) != '\n' && i < SIZE - 1)
    {
         message[i++] = c;
    }
    
    printf("Reversal is: ");
    reverse(message);
    
    putchar('\n');

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void reverse(char *message)
{ 
    char  *last;
    
   // NOT DONE YET WITH THIS PROJECT EXERCISE 

for(last = message + strlen(message) - 1; last >= message ;  ) {
        putchar(*last--);
    }
}
