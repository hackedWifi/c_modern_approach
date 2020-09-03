/*
 * =====================================================================================
 *
 *       Filename:  product.c
 *
 *    Description:  Formats product information entered by the user. 
 *
 *        Version:  1.0
 *        Created:  08/21/2020 04:19:46 PM
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
  int month, year, day =0;
  int item_number = 0;
  float price = 0;

  printf ( "Enter item number: \n" );
  scanf ( "%d", &item_number );
  printf ( "Enter unit price: \n" );
  scanf ( "%f", &price );
  printf ( "Enter purchase date (mm/dd/yyyy): \n" );
  scanf ( "%d/%d/%d", &month, &day, &year );
  printf ( "Item\t\tUnit\t\tPurchase\n");
  printf ( "\t\tPrice\t\tDate\n" );
  printf ( "%-.d\t\t$%8.2f\t\t%d/%d/%d\n", item_number, price, month, day, year  );
  return EXIT_SUCCESS;
  
}				/* ----------  end of function main  ---------- */
