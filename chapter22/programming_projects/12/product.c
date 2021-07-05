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
  char date[13];
  int n, item_number = 0;
  float price = 0;

  FILE *fp;

  if(argc != 2)
  {
    printf("Usage: program filename");
    exit(EXIT_FAILURE);
  }


  if((fp = fopen(argv[1], "r")) == NULL)
    printf("Cannot read %s", argv[1]);

  printf ( "Item\t\tUnit\t\t\tPurchase\n" );
  printf ( "\t\tPrice\t\t\tDate\n" );
while((n = fscanf(fp, "%d,%f,%s", &item_number, &price, date) != EOF)) 
  {
  printf ( "%-.d\t\t$%8.2f\t\t%s\n", item_number, price, date  );
  }

  fclose(fp);
  return EXIT_SUCCESS;
  
}				/* ----------  end of function main  ---------- */
