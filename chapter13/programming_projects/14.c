/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  Modify  Programming Project 16 from Chapter 8 so that in includes
 *                  the following function:
 *                  bool are_anagrams(const char *word1, const char *word2);
 *
 *                  The function returns true if the strings pointed to by word1 and
 *                  word2 are anagrams.
 *
 *        Version:  1.0
 *        Created:  03/27/2021 04:44:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <stdlib.h>

#define MAX 50
bool are_anagrams(const char *word1, const char *word2);

int main ( int argc, char *argv[] )
{
    char word1[MAX + 1], word2[MAX + 1] = {0} , c;  
    int i = 0; 

    printf("Enter first word: ");

    while ( ( c = getchar() ) != '\n' &&  i < MAX ) {
        word1[i++] = toupper(c);

    }
    word1[i] = '\0';

    i = 0;

    printf("Enter second word: ");
    while ( ( c = getchar() ) != '\n' && i < MAX ) {
        word2[i++] = toupper(c);

    }
    word2[i] = '\0';

    if(are_anagrams(word1, word2 )) 
    {
        printf("The words are anagrams ");
    }
    else
    {
        printf("The words are not anagrams ");
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */



bool are_anagrams(const char *word1, const char *word2)
{
    int sum = 0;
    if(strlen(word1) != strlen(word2)) return false;

    while(*word1 ){
     sum += *word1++;
     sum -= *word2++;
    }
    if(!sum) 
    {
        return true;
    }

    return false;

}
