/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Suppose that we call scanf as follows:
 *                  scanf("%d%s%d", &i, s, &j);
 *                  If the user enters 12abc34 56def78, wht will be the values of i, s,
 *                  and j after the call?
 *
 *        Version:  1.0
 *        Created:  03/02/2021 09:40:09 PM
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
    int i, j;
    char s[] = "";
    printf("Enter a message: ");
    scanf("%d%s%d", &i, s, &j);
    printf ( "The values are: %d %s %d\n", i, s, j );
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

