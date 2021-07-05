/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Show the ouput of the following fragments 
 *
 *        Version:  1.0
 *        Created:  09/14/2020 04:07:31 PM
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
    // a)
    int i = 2;
    int j = 3;
    int k;
    k = i * j == 6;
    /*printf("Value of a) %d", k);*/

    // b)
    
    i = 5; j = 10; k =1;

    /*printf("Value of b) %d", k > i < j);*/

    // c)
    i = 3; j = 4; k = 1;
    /*printf("Value of c) %d", (i < j) == (j > k));*/
    // d)
    i = 3; j = 4; k = 7;
    printf("Value of d) %d", i % j + i < k );
    return 0;
}
