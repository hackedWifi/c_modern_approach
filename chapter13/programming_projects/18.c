/*
 * =====================================================================================
 *
 *       Filename:  18.c
 *
 *    Description:  Write a program that accepts a date from the user in the form 
 *                  mm/dd/yyyy and then displays it in the form month dd, yyyy, where
 *                  month is the name of the month.
 *
 *                  Enter a date (mm/dd/yyy): 2/17/2011
 *                  You entered the date February 17, 2011
 *
 *                  Store the month names in an array that contain pointer to strings.
 *
 *        Version:  1.0
 *        Created:  04/03/2021 10:20:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char *months[] = { " ","January", "February", "March", "April",
                      "May", "June", "July", "August", 
                      "September", "October", "November", "December"};
  int month, day, year, i;

  printf("Enter a date (mm/dd/yyyy): ");
  scanf ( "%2d/%2d/%4d", &month, &day, &year );  

  printf("You have entered %s %d, %d", months[month], day, year);
      return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

