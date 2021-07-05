/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Write the following function float compute_GPA(char grades[], int n)
 *                  The grades array will contain letter grades (A,B,C,D,F), either 
 *                  upper or lower case, n is the length of the array. The function
 *                  should return the average of the grades (assume that A = 4, B = 3,
 *                  C = 2, D = 1 , and F = 0).
 *
 *        Version:  1.0
 *        Created:  12/02/2020 08:48:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

float compute_GPA(char grades[], int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char grades[] = { 'A','A', 'A', 'B', 'C', 'D', 'F', 'F' };
    int n = 7;

    
        printf("%f ", compute_GPA(grades, n));
        return EXIT_SUCCESS;

}				/* ----------  end of function main  ---------- */

float compute_GPA(char grades[], int n)
{
    float average = 0.0;

    for ( int i = 0; i < n; i++ ) {

        switch ( toupper(grades[i]) ) {
            case 'A':	
                average += 4.0;
                break;

            case 'B':	
                average += 3.0;
                break;

            case 'C':	
                average += 2.0;
                break;
            case 'D':	
                average += 1.0;
                break;
                
            case 'F':	
                average += 0.0;
                break;
            default:	
                break;
        }				/* -----  end switch  ----- */
    }
    return average/n;

}

