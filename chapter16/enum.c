/*
 * =====================================================================================
 *
 *       Filename:  enum.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/20/2021 05:33:02 AM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  int i;
  enum {CLUBS, DIAMONDS, HEARTS, SPADES} s;
  s = DIAMONDS;
  printf("%d", s);

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
