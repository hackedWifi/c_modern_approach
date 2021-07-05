/*
 * =====================================================================================
 *
 *       Filename:  19.c
 *
 *    Description:  Consider the following "mystery" function below. 
 *
 *        Version:  1.0
 *        Created:  12/04/2020 09:27:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
void pb(int n);

void pb (int n)
{
    if (n != 0) {
        pb(n / 2);
        putchar('0' + n % 2);
    }

}

#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int n = 0;
   printf ( "Enter a positive number: \n" ); 
   scanf ( "%d", &n);
   pb(n);
  
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
