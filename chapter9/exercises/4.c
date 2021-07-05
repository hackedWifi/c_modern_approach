/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Write a function day_of_year(month , day, year) taht returns the day
 *                  of the year ( an integer between 1 - 366 )
 *
 *        Version:  1.0
 *        Created:  11/28/2020 03:41:27 PM
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
    
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  day_of_year
 *  Description:  
 * =====================================================================================
 */
int day_of_year ( int month, int day, int year )
{
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31,
                      30, 31, 30, 31 };
    int count = 0;
    int day_of_year = 0;
    if(year % 4 == 0 && ( year % 400 == 0 || year % 100 != 0 ) ) {
        months[1] = 29;
    }

    while (count < month - 1) {
        day_of_year += months[count++];
    }

    return day_of_year + day;

}		/* -----  end of function day_of_year  ----- */

int main ( int argc, char *argv[] )
{
    printf("%d ", day_of_year(11, 28, 2020));
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

