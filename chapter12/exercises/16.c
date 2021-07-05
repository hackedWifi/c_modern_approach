/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  Write a loop that prints the highest temperature in the temperature
 *                  array (see Exercise 14) for each day of the week. The loop body 
 *                  should call the find_largest function, passing it on row of the array
 *                  at the time.
 *
 *        Version:  1.0
 *        Created:  02/20/2021 03:59:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
int find_largest(int *a, int n);

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
int temperature[7][24] = { { [3]= 14, [15] = 21 },
                            { [0] = 100 },
                            { [22] = 50 },
                                { [23] = 100 },
                                { [2] = 32}};

    int day ;
        for ( day = 0; day < 7; day++) {
            printf("Day %d: %d\n", day, find_largest(temperature[day], 24));
        }



        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int find_largest ( int *a, int n )
{
    int *p = a;
    int max = *p;
 
    
    for(p = a; p < a + n; p++) {
        if(max < *p) 
        {
            max = *p;
        }
    }
    return max;
}
