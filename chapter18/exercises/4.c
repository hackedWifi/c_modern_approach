/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Let f be the following function. What will be the value of f(10) if
 *                  f has never been called before? What will be the value of f(10) if 
 *                  f has been called five times previously?
 *
 *        Version:  1.0
 *        Created:  05/18/2021 05:30:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
int f(int  i)
{
    static int j =0;
    return i * j++;
}

// The value of f will be 10
// The value of f will 40 at 5 times and 50 once is called 6 times.

int main()
{
    printf("%d", f(10));
    printf("%d", f(10));
    printf("%d", f(10));
    printf("%d", f(10));
    printf("%d", f(10));
}
