/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Show how to replace a continue statement by an equivalent togo
 *                  statement.
 *
 *        Version:  1.0
 *        Created:  09/24/2020 04:08:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
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
   int age = 0;
    printf("Enter your age: " );
    scanf("%d",&age);

   switch ( age ) {
       case 10:	
           printf("Your age is: %d", age);
           break;

       case 21:	
           printf("You are over %d now.", age);
           break;

       case 100:	
           goto dead_by_now;

       default:	
               printf("Re enter your age: ");
           break;
   }				/* -----  end switch  ----- */
dead_by_now: printf("You should be dead by now: ");
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


