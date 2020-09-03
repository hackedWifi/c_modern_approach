/*
 * =====================================================================================
 *
 *       Filename:  exercise-4.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  08/20/2020 03:32:56 PM
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
  int i = 0;
  float x, j  = 0;
/*  scanf( "%d%f%d", &i , &x, &j);*/
  /*printf ( "%d\n%f\n%d", i , x , j);*/

  scanf( "%f%d%f", &x , &i, &j);
  printf ( "%f\n%d\n%f", x , i , j);
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

