/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Asks the user for a 24-hour time, then displays the time in 12-hour
 *                  form.
 *
 *        Version:  1.0
 *        Created:  09/16/2020 03:31:20 PM
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
   int hour = 0;
   int minutes = 0;
   int twelve = 12;

    printf("Enter a 24-hour time: ");
    scanf("%d:%d", &hour, &minutes);
     
    switch ( hour ) {
        case 13:	
            printf("%.2d:%.2d PM", (hour - twelve), minutes); 
            break;

        case 14:	
            printf("%.2d:%.2d PM", (hour - twelve), minutes); 
            break;

        case 15:	
            printf("%.2d:%.2d PM", (hour - twelve), minutes); 
            break;

        case 16:	
            printf("%.2d:%.2d PM", (hour - twelve), minutes); 
            break;

        case 17:
            printf("%.2d:%.2d PM", (hour - twelve), minutes); 
            break;

        case 18:
            printf("%.2d:%.2d PM", (hour - twelve), minutes); 
            break;
        default:	
            printf("%.2d:%.2d AM", hour, minutes);
            break;
    }				/* -----  end switch  ----- */
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

