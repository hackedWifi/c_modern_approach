/*
 * =====================================================================================
 *
 *       Filename:  e.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  10/04/2020 08:01:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
/* Modify Programming Project 11 so that the program continues adding
 * terms until the current term becomes less than e, where e is a small
 * (floating-point) number entered by the user.
 */
#include <stdio.h>

int main(void) {

    int i, denom;
    float e, epsilon, term;

    printf("Enter epsilon: ");
    scanf("%f", &epsilon);

    for (i = 1, denom = 1, e = 1.0f, term = 1.0f; term > epsilon; i++) {
        term = (1.0f / (denom *= i));
        e += term;
    }
    printf("Approximation of e: %f\n", e);

    return 0;
}


