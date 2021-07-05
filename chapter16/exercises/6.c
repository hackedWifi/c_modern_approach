/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Write the following function, assuming that the time structure 
 *                  contains three members: hours, minutes, and seconds. (all of type 
 *                  int).
 *
 *                  struct time split_time(long total_seconds);
 *                  total_seconds is a time represented as the member of seconds since 
 *                  midnight.
 *      
 *
 *
 *        Created:  04/20/2021 10:06:19 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

struct time split_time(long total_seconds);
struct time {
    int hours, minutes, seconds;
};
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    struct time t;
    long total_seconds;
    printf("Please enter total of seconds since midnight: ");
    scanf("%ld", &total_seconds);
    t = split_time(total_seconds);    
    printf("Time is: %.2d:%.2d:%.2d\n", t.hours, t.minutes, t.seconds);
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

struct time split_time(long total_seconds)
{
    struct time t;
    t.hours = total_seconds /3600;
    t.minutes = (total_seconds % 3600) / 60; 
    t.seconds = (total_seconds % 3600) % 60;
    return t;


}

