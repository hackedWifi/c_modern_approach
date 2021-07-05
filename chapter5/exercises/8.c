/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  09/15/2020 03:47:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
// Simplify the following IF statement
/*if (age >= 13) */
    /*if (age <= 19)*/
        /*teenager = true;*/
    /*else*/
        /*teenager = false;*/
/*else if (age < 13)*/
    /*teenager = false;*/
int main() {

int age = 12;
printf("%d ", (age >= 13 && age <= 19) ? 1 : 0);
return 0;
}
