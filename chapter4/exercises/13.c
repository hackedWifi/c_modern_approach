/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Only one of the expressions ++i and i++ is exactly the same as
 *                  ( i += 1 ); which one is it?
 *
 *        Version:  1.0
 *        Created:  09/04/2020 09:02:16 AM
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
int i = 1;
printf ( "%d %d %d\n", ++i, i++, i += 1);
// ++i is equal to i += 1; because prefix updates the operand before the end of the 
// expression statements
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

