/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  converts a numerical grade into a letter grade 
 *
 *        Version:  1.0
 *        Created:  09/22/2020 03:57:11 PM
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
   int grade = 0;
   printf("Enter a numberical grade: ");
   scanf("%d", &grade);
    char a = 'A'; char b = 'B'; char c = 'C'; char d = 'D'; char f = 'F';

   switch ( grade / 10) {
       case 10:
           printf("Letter Grade: %c\n", a);

           break;
       case 9:
           printf("Letter Grade: %c\n", a);
           break;
       case 8:	
           printf("Letter Grade: %c\n", b);
           break;

       case 7:	
           printf("Letter Grade: %c\n", c);
           break;

       case 6:	
           printf("Letter Grade: %c\n", d);
           break;
       default:	
           printf("Letter Grade: %c\n", f);
           break;
   }				/* -----  end switch  ----- */
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

