/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Declares a two-multidimensional array that stores one month of hourly
 *                  tempeture readings. The rows represent days of the month; the column
 *                  should represent hours of the days.
 *
 *        Version:  1.0
 *        Created:  10/19/2020 09:38:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#define HOURS 24
#define DAYS 30/*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int tempeture_readings[DAYS][HOURS] = {{0}}; 
   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
