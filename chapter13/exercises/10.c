/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  The following function supposedly creates an identical copy of a 
 *                  string. What's wrong with the function?
 *
 *        Version:  1.0
 *        Created:  03/05/2021 03:18:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string.h>
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
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

// This function has an invalid pointer, in other words pointer *q is not pointing to 
// any variable
char *duplicate(const char *p)
{
    char *q;
    strcpy(q, p);
       
    return q;

}
