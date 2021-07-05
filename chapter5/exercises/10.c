/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  What output does the following program fragment produce? 
 *
 *        Version:  1.0
 *        Created:  09/15/2020 04:00:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>


#include <stdlib.h>

#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int i = 1;
    switch (i % 3) {
        case 0: printf("zero");
        case 1: printf("one");
        case 2: printf("two");
    }
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
