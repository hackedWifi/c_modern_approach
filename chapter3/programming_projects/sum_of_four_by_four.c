/*
 * =====================================================================================
 *
 *       Filename:  sum_of_four_by_four.c
 *
 *    Description:  Display numbers in a 4 by 4 arrangement, followed by the sums of the 
 *                  rows, columns, and diagonals.
 *
 *        Version:  1.0
 *        Created:  08/28/2020 04:14:25 PM
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
  int one, two, three, four = 0;
  int five, six, seven, eight = 0;
  int nine, ten, eleven, twelve = 0;
  int thirteen, fourteen, fifteen, sixteen = 0;

  printf ( "Enter the number from 1 to 16 in any order: \n" );
  scanf ( "%d %d %d %d %d %d %d %d %d %d %d %d %d %d %d %d",
      &one, &two, &three, &four, &five, &six, &seven, &eight,  
      &nine, &ten, &eleven, &twelve, &thirteen, &fourteen, &fifteen, &sixteen);

  printf ( "%4d%4d%4d%4d\n%4d%4d%4d%4d\n%4d%4d%4d%4d\n%4d%4d%4d%4d\n\n  ",
      one, two, three, four, five, six, seven, eight, 
      nine, ten, eleven, twelve, thirteen, fourteen, fifteen, sixteen);

  printf ( "Rows sum: %d%3d%3d%3d\n",
      (one + two + three + four ),
      (five + six + seven + eight),
      (nine + ten + eleven + twelve),
      (thirteen + fourteen + fifteen + sixteen));

  printf ( "Columns sum: %d%3d%3d%3d\n",
      (one + five + nine + thirteen) ,
      (two + six + ten + fourteen) ,
      (three + seven + eleven + fifteen),
      (four + eight + twelve + sixteen));

  printf ( "Diagonals sum: %d%3d\n", 
      (one + six + eleven + sixteen),
      (thirteen + ten + seven + four));
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

