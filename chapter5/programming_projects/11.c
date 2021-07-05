/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Program that asks the user a two-digit, then prints the English word
 *                  for the number.
 *
 *
 *        Created:  09/20/2020 03:45:09 PM
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
    int number, one_digit, ten_digit = 0;
    printf("Enter a two-digit number: ");
    scanf("%d",&number);
    ten_digit = number / 10;
    one_digit = number % 10;

    printf ( "ten: %d ones: %d \n", ten_digit, one_digit );
    if ( number <= 10) {
        printf("Please input a two-digit number");
    }

    switch ( ten_digit ) {
        case 1:
            switch (one_digit) {
                case 0:
                    printf("Ten");
                    break;
                case 1:
                    printf("eleven");
                    break;
                case 2:
                    printf("twelve");
                    break;

                case 3:
                    printf("thirteen");
                    break;

                case 4:	
                    printf("fourteen");
                    break;
                case 5:
                    printf("fifteen");
                    break;
                case 6:
                    printf("sixteen");
                    break;
                case 7:
                    printf("seventeen");
                    break;

                case 8:
                    printf("eighteen");
                    break;

                case 9:	
                    printf("nineteen");
                    break;
            }
            break;
        case 2:	
            printf("Twenty");
            break;
        case 3:	
            printf("Thirty");
            break;
        case 4:	
            printf("Forty");
            break;
        case 5:
            printf("Fifty");
            break;
        case 6:
            printf("Sixty");
            break;
        case 7:
            printf("Seventy");
            break;
        case 8:
            printf("Eighty");
            break;
        case 9:
            printf("Ninety");
            break;
        default:	
            break;
    }
    if ( ten_digit != 1 ) {
        switch( one_digit) {
            case 1: 
                printf("-one");
                break;
            case 2: 
                printf("-two");
                break;
            case 3: 
                printf("-three");
                break;
            case 4: 
                printf("-four");
                break;

            case 5:
                printf("-five");
                break;
            case 6: 
                printf("-six");
                break;
            case 7: 
                printf("-seven");
                break;
            case 8: 
                printf("-eight");
                break;
            case 9: 
                printf("-nine");
                break;

        }
    }


    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
