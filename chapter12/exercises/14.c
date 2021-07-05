/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  Assume that the following array contains a week's vorth of hourly
 *                  temperature readings wiht each row containingthe readings for one 
 *                  day. 
 *                  int temperature[7][24];
 *                  Write a statement that uses the search function (see exercise 7)
 *                  to search the entire temperatures array for the value 32.
 *
 *
 *
 *        Version:  1.0
 *        Created:  02/19/2021 04:39:27 PM
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

    int result = search(temperature[0], 7 * 24, 32);

    printf("%d ", result); 

int row, col;
    for (row = 0; row < 7; row++) {
        for (col = 0; col < 24; col++) {
            printf("%-4d", temperature[row][col]);
        }
        printf("\n");
    }


        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

bool search (const int a[], int n, int key )
{
    const int *p ;

    
    for ( p = a; p < a + n;p++ ) {
        if(key == *p) return true;
    }
        return false;

}


