/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Suppose tha str is an array of characters. Which one of the following
 *                  statements is not equivalent to the other three?
 *
 *        Version:  1.0
 *        Created:  03/04/2021 10:01:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

/*(a) *str = 0; */
/*(b) str[0] = '\0'; */
/*(c) strcpy(str, ""); */
/*(d) strcat(str, "");  This statament is not equal because it concatenates a space
 *                      at the end of str*/

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
    char str[] = "hello";
    
    /**str = 0;*/
    /*str[0] = '\0';*/
    /*strcpy(str, "");*/
    strcat(str, "");
    puts(str);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
