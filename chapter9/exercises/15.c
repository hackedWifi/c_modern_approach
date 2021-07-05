/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  The following (rather confusing) function finds the median of three
 *                  numbers. Rewrite the function so that it has just one return 
 *                  statement.
 *
 *        Version:  1.0
 *        Created:  12/03/2020 11:38:31 PM
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
double median(double x, double y, double z);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

    printf("%g", median(8, 5, 6));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

double median(double x, double y, double z)
{
    double median ;
    if(x <= y)
    {
        if(y <= z) 
        {
            median = y;
        }

        else if (x <= z) 
        {
            median = z;
        }
        else
        {
            median = x;
        }
    }

    else
    {
        if (z <= y) median = y;
        else if (x <= z) median = x;
        else median = z;
    }

    return median;

}
