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
#include <ctype.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    /** I will get back to this later **/

    int hours, minutes;
    char am_pm;
    printf("Enter the desired departure time: ");
    scanf("%d:%d %c",&hours, &minutes, &am_pm);

    switch ( tolower(am_pm )) {
        case 'a':	
            printf("am");
            break;

        case 'p':	
            printf("pm");
            break;


        default:	
            break;
    }				/* -----  end switch  ----- */
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


