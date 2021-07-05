/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Modify Programming Project 9 from Chapter 5 so that each date entered
 *                  by the user is stored in a date structure (see exercise 5). Incorpo-
 *                  rate the compare_dates function of exercise 5 into your program.
 *
 *        Version:  1.0
 *        Created:  04/30/2021 10:55:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


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

struct date {
   int month, day, year;
};
int compare_dates(struct date d1, struct date d2);
int day_of_year(struct date d);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   struct date d1;
   struct date d2;

   printf("Enter fist date: ");
   scanf("%d/%d/%d", &d1.month, &d1.day, &d1.year);
    printf("Enter second date: ");
   scanf("%d/%d/%d", &d2.month, &d2.day, &d2.year);

   if(compare_dates(d1, d2 ) > 0)
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", d1.month, d1.day, d1.year, d2.month , d2.day,d2.year);
   else if(compare_dates < 0)
      printf("%d/%d/%.2d is earlier than %d/%d/%.2d\n", d2.month, d2.day, d2.year, d1.month , d1.day,d1.year);
   else
        printf("Dates are equal\n");
   
   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int day_of_year(struct date d)
{
    int months[12] = { 31, 28, 31, 
                    30, 31, 30, 31, 
                    31, 30, 31, 30, 31 };
    int day = 0, i = 1;
    while(i < d.month)
    {
        day += months[i];
        i++;
    }
    return day + d.day;
}
int compare_dates(struct date d1, struct date d2)
{
    int day1 = day_of_year(d1);   
    int day2 = day_of_year(d2);   

    if(day1 > day2) //&& && (d1.day > d2.day))
        return 1;
    else if(day1 < day2 )  
        return -1;
    return 0;
}

