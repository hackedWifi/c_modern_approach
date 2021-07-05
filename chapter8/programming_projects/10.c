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
    int j, i;
    int hours , minutes , minutes_since_midnight , dhour , arrival_time;
    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hours, &minutes);
    minutes_since_midnight = (hours * 60) + minutes;
    if(minutes_since_midnight >= 1320 || minutes_since_midnight < 480) 
    {
        printf("Next departure is at 8:00 a.m\n");
        return 0;
    }

    int times[8][2] = { {480, 616 },
                        {583, 712 },
                        {679, 813 },
                        {767, 900 },
                        {840, 968 },
                        {945, 1075},
                        {1140, 1280},
                        {1305, 1438}};

    for ( i = 0; i < 8; i++ ) {

        for ( j = 0; j < 2; j++ ) {
            if(minutes_since_midnight >= times[i][0] ) {
                

            dhour =  times[i + 1][0] ;
            arrival_time = times[i + 1][1] ;


            }
            

            
        }
    }
    
            printf("Closest departure time is: %d:%d Arriving at %d:%d \n",dhour / 60, dhour % 60, arrival_time /60, arrival_time % 60); 
      return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


