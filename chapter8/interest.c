/*
 * =====================================================================================
 *
 *       Filename:  interest.c
 *
 *    Description:  Prints a table of compound interest 
 *
 *        Version:  1.0
 *        Created:  10/19/2020 02:34:03 PM
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
#define NUM_RATES ((int) (sizeof(value) / sizeof(value[0])))
#define INITIAL_BALANCE 100.00
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int i, low_rate, num_years, year;
  double value[5];

  printf("Enter interest rate: ");
  scanf("%d", &low_rate);
  printf("Enter number of years: ");
  scanf("%d", &num_years);

  printf("\nYears");
  
  for ( i = 0 ; i < NUM_RATES; i++) {
    printf("%6d%%", low_rate + i);
    value[i] = INITIAL_BALANCE;
  }
 printf ( "\n" );  


 for ( year = 1; year <= num_years; year++ ) {
   printf("%3d\t", year);
   for (  i = 0; i < NUM_RATES; i++ ) {
     value[i] += (low_rate + i) / 100.0 * value[i];
     printf("%7.2f", value[i]);
   }
   printf ( "\n" );
 }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

