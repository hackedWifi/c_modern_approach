/*
 * =====================================================================================
 *
 *       Filename:  readline.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/15/2021 02:37:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include "readline.h"
int read_line(char str[], int n )
{
    int ch, i = 0;
    while((ch = getchar()) != '\n')
        if(i < n)
            str[i++] = ch;
    str[i] = '\0';

    return i;
}
