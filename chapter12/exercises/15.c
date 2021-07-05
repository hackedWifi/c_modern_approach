/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  Write a loop that prints all temperature readings stored in row i of 
 *                  the temperatures array (see exercise 14). Use a pointer to visit each 
 *                  element of the row.
 *
 *        Version:  1.0
 *        Created:  02/19/2021 09:50:27 PM
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
#include <stdbool.h>

bool search(const int a[], int n, int key);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int temperature[7][24] = { { [3]= 14, [15] = 21 },
                                { [23] = 100 },
                                { [2] = 32}};

    int *p; 
    int day = 2;
        for ( p = temperature[day];p < temperature[day ]+ 24 ; p++) {
            printf("%4d", *p);
        }


        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */




