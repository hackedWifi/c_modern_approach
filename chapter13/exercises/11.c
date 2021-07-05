/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  The Q&A section at the end of this chapter shows how the strcmp
 *                  function might be written using array subscripting. Modifiy the
 *                  function to use pointer arithmetic.
 *
 *        Version:  1.0
 *        Created:  03/05/2021 04:28:31 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int p_strcmp(char *s, char *t);
int my_strcmp(char *s, char *t);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char str1[] = "abcd",  str2[] = " rcd";
    /*printf("%d" ,my_strcmp(str1, str2));*/
    printf("%d" ,p_strcmp(str1, str2));
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int p_strcmp(char *s, char *t)
{

    while( s++ == t++  ) {
        if(*s == '\0')
            return 0;
    }
    return *s - *t;
}

int my_strcmp(char *s, char *t)
{
    int i;

    for ( i = 0; s[i] == t[i]; i++ ) {
        if(s[i] == '\0')
            return 0;
    }
    return s[i] - t[i];
}
