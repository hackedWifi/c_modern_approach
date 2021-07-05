/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  Use the techniques of Section 13.6 to condense the count_spaces 
 *                  function of Section 13.4. In particular, replace the for statement 
 *                  by a while loop.
 *
 *        Version:  1.0
 *        Created:  03/08/2021 01:09:26 PM
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
int count_spaces(const char *s);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char sentence[] = "has spaces ";
    printf("Number of spaces: %d ", count_spaces(sentence));
    
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  count_spaces
 *  Description:  
 * =====================================================================================
 */
int count_spaces ( const char *s )
{
    int count = 0;
    while(*s++)
    {
        if(*s == ' ')
            count++;
    }
    
    return count;
}		/* -----  end of function count_spaces  ----- */
