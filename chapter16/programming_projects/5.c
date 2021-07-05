/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Modify Programming Project 8 from Chapter 5 so that the times are
 *                  stored in a single array. The elements of the array will be struct-
 *                  res, each containing a departure time and the corresponding arrival
 *                  time. (Each time will be an integer, representing the number of mi-
 *                  nutes since midnight.) The program will use a loop to search the a-
 *                  rray for the departure time closest to the time entered by the user.
 *                  
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
#include "departure.h"

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int hours, minutes, total_min, closest_h, closest_m , arrival_h, arrival_m;
    struct departure times[] = {{ 480, 616},
                                { 583, 712},
                                { 679, 811},
                                { 767, 900},
                                { 840, 968},
                                { 945, 1075},
                                { 1140,1280},
                                { 1305,1438} };

    printf("Enter a 24-hour time: ");
    scanf("%d:%d",&hours, &minutes);
    total_min = hours * 60 + minutes;

    for(int i = 0; times[i].departure <= total_min ; i++)
    {
            closest_m = times[i].departure;
            arrival_m = times[i].arrival;
            /*return 0;*/
    }
    closest_h = closest_m / 60;
    closest_m %= 60;
    arrival_h = arrival_m / 60;
    arrival_m %= 60 ;
    
    printf("Closest departure time is: %2d:%.2d %c.m, arriving at %2d:%.2d %c.m,\n", closest_h,   
            closest_m, (closest_h > 12 ? 'p': 'a'), arrival_h, arrival_m , (arrival_h > 12 ? 'p' : 'a'));       
    return EXIT_SUCCESS;
}

