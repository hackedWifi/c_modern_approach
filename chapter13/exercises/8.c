/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  What will be the value of str after the following 
 *                  statements have been executed?
 *
 *
 *        Version:  1.0
 *        Created:  03/04/2021 10:18:29 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string.h>
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
   char str[]= "hello how are you what the hell";
   strcpy(str, "tire-bouchon");
   strcpy(&str[4], "d-or-wi");
   strcat(str, "red?");
   
   // the value of str will be tired-or-wired?
    puts(str);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
