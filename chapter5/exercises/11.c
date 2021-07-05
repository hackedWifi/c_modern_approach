/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Write a switch statement whose controlling expression is the 
 *                  variable area_code. If value of area_code is in the table, the
 *                  switch statement will print the corresponding city name. Otherwise,
 *                  the switch statement will display the message "Area code not 
 *                  recognized"
 *
 *        Version:  1.0
 *        Created:  09/15/2020 04:26:18 PM
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
    int area_code = 0;
    printf("Please enter area code: ");
    scanf("%d", &area_code);

    switch ( area_code ) {
        case 229:	
            printf("Albany\n");
            break;

        case 404:	
            printf("Atlanta\n");
            break;

        case 470:	
            printf("Atlanta\n");
            break;

        default:	
            printf("Area code not recognized\n");
            break;
    }				/* -----  end switch  ----- */
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
