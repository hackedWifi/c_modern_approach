/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Show the output produced by the following program fragments 
 *
 *        Version:  1.0
 *        Created:  09/03/2020 09:54:13 PM
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
  // a)
  /*int i =1; */
  /*printf("%d ", i++ - 1 );*/
  /*printf("%d ", i);*/

  // b)
  /*int i = 10; int j = 5;*/
  /*printf("%d ", i++ - ++j );*/
  /*printf("%d %d", i, j);*/
 

  // c)
/*  int i = 7; int j = 8;*/
  /*printf("%d ", i++ - --j);*/
/*printf("%d %d", i, j);*/

  // d)
  int i =3 ; int j = 4;  int k = 5;
  printf("%d ", i++ - j++ + --k);
  printf("%d %d %d", i, j, k);
  return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */
