/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  What does the following statement print if 'i' has the value of -17? 
 *
 *        Version:  1.0
 *        Created:  09/15/2020 03:42:42 PM
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
int i = -17;
// the following printf statement does gets executed to else statement becuase i < that 0
printf ( "%d\n", i >= 0 ? i : -i );
    return 0;
}
