/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  A program that prompts the user to enter a number n, then prints all
 *                  even squares between 1 and n. 
 *
 *        Version:  1.0
 *        Created:  09/28/2020 10:50:35 PM
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
   int number = 0;
   int i = 0;

   printf("Enter a number: ");
   scanf("%d", &number);
    
   for ( i = 1; i * i <= number ; i++){
       if(i % 2 == 0 ) printf("%d\n", i * i );
       
   }
       

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

