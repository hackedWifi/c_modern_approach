 /*=====================================================================================
*
*       Filename:  1.c
*
*    Description:  Modify the stack example of Section 10.2 so that it stores characters
*                  instead of integers. Next, add a main function that asks the user to 
*                  enter a series of parentheses and/or braces then indicates whether
*                  or not they're properly nested:
*                  HINT: as the program read characters, have it push each left paren-
*                  theses or left brace. When it reads a right parenthesis or brace, 
*                  have it pop hte stack and check that the item popped is a matching
*                  parenthesis or brace. (If not, the parenthesis/brace aren't nested
*                  properly.) When the program reads the new-line character, have it 
*                  check whether the stack is empty: if so, the parentheses/braces are
*                  matched. If the stack isn't empty (or if stack_underflow is ever 
*                  called), the parentheses/braces arent matched. If stack_overflow
*                  is called, have the program print the message Stack overflow and ter-
*                  minate inmediately.
*
*        Version:  1.0
*        Created:  12/16/2020 09:58:42 PM
*       Revision:  none
*       Compiler:  gcc
*
*         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
*   Organization:  
*
* ===================================================================================== 
*/
#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>
#define STACK_SIZE 100            /*  */

void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
char pop(void);
char contents[STACK_SIZE];
int top = 0;
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char c = 0;
    printf ( "Enter parentheses and/or braces " );

    while( ( c = getchar() ) != '\n')
    {
        if(c == '{' || c == '(')
            push(c);
        if(c == '}' || c == ')')
            pop();
        
}
    if(is_empty() )
        {
        printf("Parentheses/braces are nested properly\n");
    }
    else
        {
        printf ( "Parentheses/braces not matched\n" );
        }


        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  make_empty
 *  Description:  
 * =====================================================================================
 */
void
make_empty ( void )
{
    top = 0;
}		/* -----  end of function make_empty  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  is_empty
 *  Description:  
 * =====================================================================================
 */
bool is_empty ( void )
{
    return top == 0;
}		/* -----  end of function is_empty  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  is_full
 *  Description:  
 * =====================================================================================
 */
bool is_full ( void )
{
    return top == STACK_SIZE;
}		/* -----  end of function is_full  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  push
 *  Description:  
 * =====================================================================================
 */
void push ( int i )
{
    if (is_full());
    else
        contents[top++] = i;
}		/* -----  end of function push  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  pop
 *  Description:  
 * =====================================================================================
 */
char pop ( void )
{
    if (is_empty())
        return top;
    else
        return contents[--top];
}		/* -----  end of function pop  ----- */

