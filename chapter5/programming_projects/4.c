/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Asks the user to enter a wind speed (in knots), then displays
 *                  the  corresponding description
 *
 *        Version:  1.0
 *        Created:  09/17/2020 02:52:35 PM
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
    int knots = 1;
    printf("Please enter speed in knots: ");
    scanf("%d", &knots);
    if ( knots <= 1 ) printf("Calm\n");

    else if ( knots >= 1 && knots <= 3 ) printf("Light air\n");
    else if ( knots > 4 && knots <= 27) printf("Breeze\n");
    else if ( knots > 27 && knots <= 47) printf("Gale\n");
    else if ( knots > 47 && knots <= 63) printf("Storm\n");
    else printf("Hurricane\n"); 

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

