/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  C programmers often use the fprintf function to write error messages:
 *                  fprintf(stderr, "Range error: index = %d\n", index);
 *
 *                  stderr is C;s "standar error" stream; the remaining arguments are 
 *                  the same as those for printf, starting with the format string. Write 
 *                  a macro named ERROR taht generates the call of fprintf shown above 
 *                  when given a format string  and the items to be displayed:
 *
 *                  ERROR("Range error: index = %d\n" , index);
 *
 *        Version:  1.0
 *        Created:  04/09/2021 02:42:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#define ERROR(format_str, item) (fprintf(stderr,(format_str),(index)))
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
  int index = 2;
 ERROR("Range error: index = %d", index);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

