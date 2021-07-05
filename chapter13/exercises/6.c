/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Write a function named censor that modifies a string by replacing 
 *                  every occurrence of foo by xxx. For example, the string "food fool"
 *                  would become "xxxd xxxl". Make the function as short as possible
 *                  without sacrificing clarity.
 *
 *        Version:  1.0
 *        Created:  03/04/2021 02:56:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
#define N 80            /*  */
void censor(char *str);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char str[]= "food fool fuo "; 
    censor(str);
    puts(str);
}				/* ----------  end of function main  ---------- */

void censor(char *str)
{
    for ( int i = 0; str[i] != '\0' ; i++ ) {
        if(str[i] == 'f' ||str[i] == 'o') str[i] = 'x';
    }



}
