/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  Translates a 12-hour time into a 24-hour time 
 *
 *        Version:  1.0
 *        Created:  10/12/2020 07:33:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int hour, minutes;
  char am_pm;
  printf("Translates a 12-hour time into a 24-hour time\n");
  printf("Enter a 12-hour time: ");
  scanf("%d:%d %c", &hour, &minutes, &am_pm);
  
  switch ( tolower(am_pm)) {
    case 'a':	
      printf("Equivalent 24-hour time: %d:%.2d\n", hour, minutes);
      break;

    case 'p':	
      printf("Equivalent 24-hour time: %d:%.2d\n", hour + 12, minutes);
      break;

    default:	
      printf("Please enter a valid time (hh:mm)");
      break;
  }				/* -----  end switch  ----- */
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
