/*
 * =====================================================================================
 *
 *       Filename:  match.c
 *
 *    Description:  It matches parentheses and curly braces (( {{ }} )) 
 *
 *        Version:  1.0
 *        Created:  05/25/2021 04:10:30 PM
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
#include "stack.h"
int main ( int argc, char *argv[] )
{
    char c = 0;
    Stack s = create();
    printf ( "Enter parentheses and/or braces " );

    while( ( c = getchar() ) != '\n')
    {
        if(c == '{' || c == '(')
            push(s, c);
        if(c == '}' || c == ')')
            pop(s);
        
}
    if(is_empty(s) )
        {
        printf("Parentheses/braces are nested properly\n");
    }
    else
        {
        printf ( "Parentheses/braces not matched\n" );
        }


        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */



