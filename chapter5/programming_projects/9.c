/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  A program that prompts the user to enter two dates and then indicates
 *                  which date comes earlier on the calendar.
 *
 *        Version:  1.0
 *        Created:  09/30/2020 07:19:58 PM
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
   int month, day, year, second_month, second_day, second_year;
   printf("Enter fist date: ");
   scanf("%d/%d/%d", &month, &day, &year);
    printf("Enter second date: ");
   scanf("%d/%d/%d", &second_month, &second_day, &second_year);

   if ( day < second_day && month < second_month && year < second_year  ) {
       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", month, day, year, second_month, second_day, second_year);
   }
   else {

       printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", second_month, second_day, second_year, month , day, year);

   }

   
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


