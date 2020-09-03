/*
 * =====================================================================================
 *
 *       Filename:  isbn.c
 *
 *    Description:  It breaks down ISBN entered by the user in groups. 
 *
 *        Version:  1.0
 *        Created:  08/25/2020 07:27:45 AM
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
  int gs1, group_id, publisher_code, item_num, check_digit = 0;
  printf ( "Enter ISBN (878-1-393-97450-3): " );
  scanf ("%d-%d-%d-%d-%d", &gs1, &group_id, &publisher_code, &item_num, &check_digit);
  printf ( "GS1 prefix: %d\n", gs1 );
  printf ( "Group identifier: %d\n", group_id );
  printf ( "Publisher code: %d\n", publisher_code );
  printf ( "Item number: %d\n", item_num);
  printf ( "Check digit: %d\n", check_digit );
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
