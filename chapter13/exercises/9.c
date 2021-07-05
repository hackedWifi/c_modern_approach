/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  What will be the value of s1 after the following 
 *                  statements have been executed?
 *
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
   char s1[50]= "hello";
   char s2[50]= "hello";
   strcpy(s1, "computer");
   strcpy(s2, "science");

   if(strcmp(s1, s2) < 0)
       strcat(s1, s2);
   else
       strcat(s2, s1);
   s1[strlen(s1) - 6] = '\0';

   
   // the value of str will be tired-or-wired?
    puts(s1);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
