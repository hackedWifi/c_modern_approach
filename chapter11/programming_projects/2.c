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

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int hours, minutes, minutes_since_midnight, departure, arrival;
        printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hours, &minutes);
    minutes_since_midnight = (hours * 60) + minutes;
    find_closest_flight(minutes_since_midnight, &departure, &arrival);
    
    printf("Departure time is %2.2d:%2.2d\nArrival time is: %2.2d:%2.2d\n ", departure / 60,
    departure % 60, arrival / 60, arrival % 60);
    return EXIT_SUCCESS;
}

void find_closest_flight(int desired_time, int *departure_time, int *arrival_time)
{
    int d8 = 480, a10 = 616;
    int d9 = 583, a11 = 712;
    int d11 = 703, a13 = 811;
    int d12 = 767, a15 = 900;
    int d14 = 840, a16 = 968;
    int d15 = 945, a18 = 1075;
    int d19 = 1140, a21 = 1280;
    int d21 = 1305, a24 = 1435;
     
    if(desired_time < d8 ) 
    {
        *departure_time = d8 ;
        *arrival_time = a10;
    }
    else if(desired_time > d8 && desired_time < d9 ) 
    {
        *departure_time = d9 ;
        *arrival_time = a11;
    }

    else if(desired_time > d9 && desired_time < d11) 
    {
        *departure_time = d11 ;
        *arrival_time = a13;
    }
    
    else if(desired_time > d11 && desired_time < d12 ) 
    {
        *departure_time = d12 ;
        *arrival_time = a15;
    }
    
    else if(desired_time > d12 && desired_time < d14 ) 
    {
        *departure_time = d14 ;
        *arrival_time = a16;
    }

    else if(desired_time > d14 && desired_time < d15 ) 
    {
        *departure_time = d15 ;
        *arrival_time = a18;
    }

    else if(desired_time > d15 && desired_time < d19 ) 
    {
        *departure_time = d19 ;
        *arrival_time = a21;
    }

    else if(desired_time > d19 && desired_time < d21 ) 
    {
        *departure_time = d21 ;
        *arrival_time = a24;
    }
    else 
    {
        *departure_time = d8;
        *arrival_time = a10;
        
    } 

}				/* ----------  end of function main  ---------- */


