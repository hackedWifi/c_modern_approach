/*
 * =====================================================================================
 *
 *       Filename:  typedef.c
 *
 *    Description:  Creates types named Int8, Int16, and Int32. This represent 8-bit,
 *                  16-bit, and 32-bit.
 *
 *        Version:  1.0
 *        Created:  10/07/2020 04:49:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  typedef int Int8;
  typedef int Int16; 
  typedef long Int32;

  Int8 bit8 = 255;
  Int16 bit16 = 32767;
  Int32 bit32 = 2147483648;
    return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */

