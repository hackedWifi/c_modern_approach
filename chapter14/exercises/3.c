/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Let DOUBLE(x) 2*x
 *
 *                  (a) What is the value of DOUBLE(1+2)? The value is 4
 *                  (b) What is the value of 4/DOUBLE(2)? The value is 4
 *                  (c) fix the definition of DOUBLE.
 *
 *        Version:  1.0
 *        Created:  04/06/2021 02:43:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>
#define DOUBLE(x) (2*(x))      /*  */
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  
  printf("The value of (a) is: %d\n", DOUBLE(1+2)); 
  printf("The value of (b) is: %d\n", 4/DOUBLE(2)); 
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
