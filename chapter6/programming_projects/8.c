/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  A program that prints a one-month calendar. The user specifies the 
 *                  number of days in the month and the day of the week on which the 
 *                  month begins:
 *
 *        Version:  1.0
 *        Created:  09/29/2020 05:02:31 PM
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
    int days_in_month = 0;
    int starting_day = 0;
    printf ( "Enter a number of days in month: " );
    scanf("%d", &days_in_month);
    if(days_in_month > 31 || days_in_month < 0) 
    {
        printf("Please enter a valid date range (1 -30/31)");
        return 0;
    }
    printf("Enter starting day of the week (1=Sun, 7=Sat): ");
    scanf("%d", &starting_day);
    if(starting_day < 1 || starting_day > 7) 
    {
        printf("Please enter a valid day range (1-7)");
        return 0;
    }
    printf("Sun\tMon\tTue\tWed\tThu\tFri\tSat\n");

    for(int i = 1; i < starting_day; i++){
        printf("\t");
    }
   for ( int i = 1; i <= days_in_month; i++ ) {
        printf("%d\t",  i);
        if((starting_day + i - 1) % 7 == 0) printf("\n");

    }
   printf("\n");
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

