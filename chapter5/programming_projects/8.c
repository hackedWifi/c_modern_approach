/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Asks user to enter a time (expressedin 24-hour clock). The program
 *                  the  displays the departure and arrival times for the flight whose
 *                  departure time is closest to that entered by the user.
 *
 *        Version:  1.0
 *        Created:  09/19/2020 08:03:33 PM
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
    int hours, minutes, minutes_since_midnight ;
    int departure_at_8 = 8 * 60;
    int departure_at_9 = 9 * 60 + 43;
    int departure_at_11 = 11 * 60 + 19;
    int departure_at_12 = 12 * 60 + 47;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hours, &minutes);
    minutes_since_midnight = (hours * 60) + minutes;
    
    if(minutes_since_midnight < departure_at_8 ) printf("Closest departure time is 8:00 a.m., arriving at 10:16 a.m.");
    else if(minutes_since_midnight < departure_at_9 ) printf("Closest departure time is 9:43 a.m., arriving at 11:52 a.m.");
    else if(minutes_since_midnight < departure_at_11 ) printf("Closest departure time is 11:19 a.m., arriving at 1:31 p.m.");  
    else if(minutes_since_midnight < departure_at_12 ) printf("Closest departure time is 12:47 a.m., arriving at 3:00 p.m.");  
    else printf("No more departures at this time. Next departure is at 8:00 a.m.");

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


