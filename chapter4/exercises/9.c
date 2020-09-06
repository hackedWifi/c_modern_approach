/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  Shows the ouput of the below statements 
 *
 *        Version:  1.0
 *        Created:  09/03/2020 04:33:06 PM
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
  int i = 7;
  int j = 8;
  int k;
  
  // a)
  /*i *= j + 1;*/
  /*printf("%d %d", i, j);*/

  // b)
/*  i = j = k = 1;*/
  /*i += j += k;*/
  
  // c) 

  /*i = 1; j = 2; k = 3;*/
  /*i -= j -= k;*/
  // d)
  i = 2;  j = 1; k = 0;
  i *= j *= k;
  printf("%d %d %d ", i, j, k);
  
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
