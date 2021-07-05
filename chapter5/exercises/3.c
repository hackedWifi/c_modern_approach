/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Illustrates the short-circuit behavior of logical expressions. 
 *
 *        Version:  1.0
 *        Created:  09/15/2020 02:43:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
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
int main() {
int i = 3; int j = 4; int k = 5;

//a)
printf("%d ", i < j || ++j < k);
printf("%d %d %d ", i, j, k);

//b)
i = 7; j = 8; k = 9;
printf("%d ", i - j && j++ < k);
printf("%d %d %d ", i, j, k);

// c)
i = 7; j = 8; k = 9;
printf("%d ", (i = j) || (j = k));
printf("%d %d %d ", i, j, k);

// d)
i = 1; j = 1; k = 1;
printf("%d ", ++i || (++j && ++k));
printf("%d %d %d ", i, j, k);

return 0;
}				/* ----------  end of function main  ---------- */
