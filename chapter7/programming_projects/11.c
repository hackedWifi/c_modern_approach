/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Formats a user's input First and last name. 
 *
 *        Version:  1.0
 *        Created:  10/12/2020 08:26:44 PM
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
int main ( int argc, char *argv[] )
{
    char initial, input;
    printf("Please enter you first and last name: ");
    
    while( (input = getchar() ) == ' ') { 
    ;  
    }
    initial = input; 
     while( (input = getchar() ) != ' ') { 
    ;
    }
    while( ( input = getchar() ) != '\n' ){
        if(input != ' '){
            putchar(input);
        }

            }
    printf(", %c.\n", initial); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

