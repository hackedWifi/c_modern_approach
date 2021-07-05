/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Calculates how many digits a number contains   
 *
 *        Version:  1.0
 *        Created:  09/16/2020 03:18:13 PM
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
    int num = 0;
    printf("Please enter a number: ");
    scanf("%d", &num);

    if ((num > 0) && (num < 10)) printf("The number has 1 digit");
            else if ((num >=10) && (num < 99)) printf("The number has 2 digits");
            else if ((num >=100) && (num < 999)) printf("The number has 3 digits");
            else if ((num >=1000) && (num < 9999)) printf("The number has 4 digits");
            else printf("Please enter a number with no more that 4 digits\n");
            return EXIT_SUCCESS;
            }				/* ----------  end of function main  ---------- */
