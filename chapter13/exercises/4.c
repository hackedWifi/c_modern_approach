/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Modify the read_line function in each of the following ways: 
 *                  a) Have it skip white space before beginning to store input 
 *                  characters.
 *                  b) Have it stop reading at the first white-space character.
 *                  HINT: To determine whether or not a character is white space, call 
 *                  isspace function.
 *                  c) Have it stop reading at the first new-line character, then store
 *                  the new-line character in the string.
 *                  d) Have it leave behind characters that it doesn't have room to store.
 *
 *        Version:  1.0
 *        Created:  03/03/2021 09:13:58 PM
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
#include <ctype.h>
int read_line(char str[], int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char str[51];
    read_line(str, 50);
    printf("%s", str);
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  read_line
 *  Description:  
 * =====================================================================================
 */

int read_line (char str[], int n )
{
    int ch , i = 0;
    
   while(isspace(ch = getchar()))
           ;

    putchar(ch);
    while ( i < n && (ch = getchar()) != '\n' && !isspace(ch)  ) { // a and d 
       str[i++] = ch;  
        
    }
    // c)
    if(ch == '\n' && i < n - 1) 
        str[i++] = ch; 
    str[i] = '\0';
    return i;
    
}		// -----  end of function read_line  ----- 

// Not printing new line yet

