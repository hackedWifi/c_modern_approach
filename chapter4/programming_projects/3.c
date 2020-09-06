/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  09/04/2020 04:51:08 PM
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
  int d1, d2, d3 = 0;
  printf("Enter a three-digit number ");
  scanf("%1d%1d%1d", &d1, &d2, &d3);
  printf("%1d%1d%1d", d3, d2, d1);
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
