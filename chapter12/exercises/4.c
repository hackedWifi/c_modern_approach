/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Rewrite the make_empty, is_empty, and is_full functions of Section
 *                  10.2 to use the pointer variable top_ptr instead of top.
 *
 *        Version:  1.0
 *        Created:  02/12/2021 08:38:21 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#define STACK_SIZE 100            /*  */
int contents[STACK_SIZE];
int *top_ptr;

void make_empty(void) 
{
    top_ptr = &contents[0];
}

bool is_empty() 
{
    return top_ptr == &contents[0];
}

bool is_full() 
{
    return top_ptr == &contents[STACK_SIZE];
}
