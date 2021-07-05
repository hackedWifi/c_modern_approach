/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Modify Programming Project 11 from Chapter 5 so that it uses arrays 
 *                  containing pointer to a strings instead of switch statements. For 
 *                  example, instead of using a switch statement to print the word for 
 *                  the first digit, use the digit as an index into an array that contains
 *                  the strings "twenty" , "thirty", and so forth.
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
    int number = 0; 
    char *ones[] = { "", "one", "two", "three", "four",
                    "five", "six", "seven", "eight",
                    "nine" };

    char *teens[] = { "ten", "eleven", "twelve", "thirteen",
                    "fourteen", "fifteen", "sixteen",
                    "seventeen", "eighteen", "nineteen" };

    char *tens[] = { "Twenty", "Thirty", "Forty",
                    "Fifty", "Sixty", "Seventy", "Eighty",
                    "Ninety" };
    

    printf("Enter a two-digit number: ");
    scanf("%d",&number);
    if(number == 0 || number > 99) {
        printf ( "Enter a valid two-digit number \n" );
        return 0;
    }
    if(number / 10 == 1)
        printf("%s ", teens[number % 10]);
    else
        printf("%s %s", tens[number / 10 - 2], ones[number % 10] );
    
    
    
     return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
