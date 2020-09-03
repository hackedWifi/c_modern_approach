/*
 * =====================================================================================
 *
 *       Filename:  date.c
 *
 *    Description:  gets a date in a form of (mm/dd/yyyy) and displays date 
 *                  in a form (yyyy/mm/dd)
 *        Version:  1.0
 *        Created:  08/21/2020 04:01:06 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto (), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )

{
  int month, day, year= 0;
  printf ( "Enter a date (mm/dd/yyyy): \n" );
  scanf ( "%d/%d/%d", &month, &day, &year );
  printf ( "You entered the date %d%.2d%.2d\n", year, month, day );
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
