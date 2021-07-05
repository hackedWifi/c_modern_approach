/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  What does the following program print? 
 *
 *        Version:  1.0
 *        Created:  03/06/2021 10:37:27 PM
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
   char s[] = "Hsjodi", *p;
     for(p = s; *p; p++)
           --*p;
     puts(s);
  // the output is Grinch
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

