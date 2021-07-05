/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Is the following statement legal (n == 1 - 10)?
 *
 *        Version:  1.0
 *        Created:  09/15/2020 03:39:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main() {
    int n = 5;
    //The below statement is legal. Since the right operand gets evaluated to -9
    if( n == 1-10) {
        printf("n is between 1 and 10");
    }
return 0;
}

