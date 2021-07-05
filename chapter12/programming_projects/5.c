/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  Reverses the words in a sentence using pointer arithmetic.
 *
 *        Version:  1.0
 *        Created:  11/09/2020 02:54:24 PM
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

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#define MAX_CHAR 100
int main ( int argc, char *argv[] )
{
    int word = 0, length = 0;
    char c;
    char last;
    char sentence[MAX_CHAR] = {0}, *p = sentence , *q;

    printf("Please enter a sentence: ");

    while ( (c = getchar()) != '\n' ) {
        if( c == '?'  || c == '.' || c == '!'  ) {
            last = c;
        }
        else {
            *p++ = c;
            length++;
        }

    }
    printf("Sentence with reversed words: ");

    for (p = sentence + length - 1;p >= sentence ; p--) 
    {
        if(*p == ' ' || p == sentence) 
        {
            if(p == sentence) 
                p--;

            for(q = p + 1;q <= p + word + 1 ; q++) 
            {
                putchar(*q); 

                if(q == sentence + length) putchar(' ');
            }

            word= 0;   
        }

        else 
        {
            word++;
        }
    }
    putchar(last);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

