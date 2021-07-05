/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  If i is avariable and p point ot i, which of the following expressions
 *                  are aliases for i?
 *
 *        Version:  1.0
 *        Created:  01/06/2021 03:51:55 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// a) *p
// b) &p
// c) *&p
// d) &*p
// e) *i
// f) &i
// g) *&i  This is an alias for i
// h) &*i


#include <stdlib.h>
#include <stdio.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int i, *p = &i;
    i = 2;

    printf ( "%d\n", *&i);
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
