/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Let GENERIC_MAX( be the following namcro:
 *                  #define GENERIC_MAX(type) \
 *                  type type##_max(type x, type y) \
 *                  {
 *                  return x > y ? x : y;
 *                  }
 *                  (a) show the preprocessor's expansion of GENERIC_MAX(long).
 *                  (b) Explain why GENERIC_MAX doesn't work for basic types such as 
 *                  unsigned long.
 *                  (c) Describe a technique that would allow us to use GENERIC_MAX with 
 *                  basic types such as unsigned long. HINT: Dont't change the definition
 *                  of GENERIC_MAX.
 *
 *        Version:  1.0
 *        Created:  04/07/2021 03:39:01 PM
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
#define GENERIC_MAX(type) \
                 type type##_max(type x, type y) \
                 { \
                 return x > y ? x : y; \
                 } \

GENERIC_MAX(long );
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

    long x = 2; long y = 6;
    printf("%ld", long_max(5.0, 67.0));
/*  (a)  #define GENERIC_MAX(long) \*/
                   /*long long_max(long x, long y) \*/
                   /*{                                \*/
                   /*return x > y ? x : y;            \*/
                   /*}                                \*/

  /*(b) Because basic types are formed of two words*/

    /*(c) Could not figure it out on my own*/
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


