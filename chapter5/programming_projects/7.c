/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Finds the largest and smallest number 
 *
 *        Version:  1.0
 *        Created:  09/17/2020 03:53:33 PM
 *       Revision:  nfirst
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
    int first, second, third, forth, max, min;
    printf("Please enter 4 integers");
    scanf("%d %d %d %d", &first, &second, &third, &forth); 
    if ( first >= second) {
        max = first;
        min = second;
    }
            else {
                max = second;
                min = first;
            }
    if( third >= max) {
        max = third;
    }
        else if (third <= min) {
            min = third;
        }
    if ( forth >= max) {
        max = forth;
    }
        else if( forth <= min){
            min = forth;
        }
    printf("Max: %d, Min: %d", max, min);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

