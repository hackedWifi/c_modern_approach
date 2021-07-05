/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  Let f be the following function:
 *                  (a) What is the value of f("abcd", "babc")?
 *                  (b) What is the value of f("abcd", "bcd")?
 *                  (c) In general, what value does f return when passed two strings
 *                  s an t?
 *
 *        Version:  1.0
 *        Created:  03/06/2021 10:45:06 PM
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

int f(char *s, char *t);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char s[] = "cbd", t[] = "c";
    int result = f(s, t);
    printf("%d ", result);
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
int f(char *s, char *t) 
{
    char *p1, *p2;
    for(p1 = s; *p1; p1++) {
        for(p2 = t; *p2; p2++)
            if(*p1 == *p2) break;
        if(*p2 == '\0') break;
    }
    return p1 - s;
}

