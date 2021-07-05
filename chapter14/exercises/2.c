/* ===================================================================================== 
 *       Filename:  2.c
 *
 *    Description:  Write a macro NELEMS(a)  that computes the number of elements in one
 *                  dimensional array a. HINT: See the discussion of the sizeof operator
 *                  in Section 8.1
 *
 *    Description:   
 *        Created:  04/06/2021 02:31:09 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#define NELEMS(a)  ((int) (sizeof(a)/sizeof(a[0])))      /*  computes the total elements in an array */
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
  int arr[] = { 'a','b','c','d','e'}; 
  printf("The number of elements is: %d", NELEMS(arr));
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

