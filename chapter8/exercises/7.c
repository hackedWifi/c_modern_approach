/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Set ups an array that remembers which segments should be "on" for
 *                  each digit (0 - 9).

 *
 *        Version:  1.0
 *        Created:  10/19/2020 09:11:51 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>

int main(void) {
const int segments[10][7] = {{ 1, 1, 1, 1, 1, 1, 0 },
                             { 0, 1, 1 },
                             { 1, 1, 0, 1, 1, 0, 1 },
                             { 1, 1, 1, 1, 0, 0, 1 },
                             { 0, 1, 1, 0, 0, 1, 1 },
                             { 1, 0, 1, 1, 0, 1, 0 },
                             { 1, 0, 1, 1, 1, 1, 1 },
                             { 1, 1, 1 },
                             { 1, 1, 1, 1, 1, 1, 1 },
                             { 1, 1, 1, 1, 0, 1, 1 }};


return 0;
}

