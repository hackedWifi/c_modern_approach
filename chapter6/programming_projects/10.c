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
   int month;
   int day;
   int year; 
   int current_month;
   int current_day;
   int current_year;
   printf("Enter a date: ");
   scanf("%d/%d/%d", &month, &day, &year);

   while(1)  {
      printf("Enter a date: ");
      scanf("%d/%d/%d", &current_month, &current_day, &current_year);
      if(current_month == 0 && current_day == 0 && current_year == 0) break;
      if(current_year < year || ( current_year == year && current_day < day ) 
            && ( current_month < month || current_month == month)) {      

         month = current_month;
         day = current_day;
         year= current_year;
      }
   } 

   printf("%d/%d/%.2d is the earlier date", month, day, year);
   



   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


