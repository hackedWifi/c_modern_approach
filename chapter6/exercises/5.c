/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Which of the following statements is not equivalent to the other two? 
 *
 *        Version:  1.0
 *        Created:  09/24/2020 03:30:43 PM
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
   int i = 0;
   
 /*  while ( i < 5 ) {*/
       /*printf("While loop: %d \n" , i);*/
       /*i++;*/
   /*}*/


/*   for ( ; i < 5;  ) {*/
       /*printf("For loop: %d \n" , i);*/
       /*i++;*/
   /*}*/


   do {
       printf("Do while loop: %d \n" , i);
       i++;
   } while ( i < 5 );				
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

