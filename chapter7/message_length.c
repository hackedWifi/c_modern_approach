/*
 * =====================================================================================
 *
 *       Filename:  message_length.c
 *
 *    Description:  Calculates the length of a message. 
 *
 *        Version:  1.0
 *        Created:  10/05/2020 04:28:45 PM
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
 int count = 0;

 while ( getchar() != '\n') {
   count++;
 }
printf("Your message was %d character(s) long.", count);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
