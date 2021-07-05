/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  a program that tests whether two words are anagrams ( permutacions
 *                  of the same letters).
 *
 *        Version:  1.0
 *        Created:  11/13/2020 09:07:34 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#define MAX 26
int main ( int argc, char *argv[] )
{
    int alphabet[MAX] = {0}, i = 0, c = 0;
    int is_anagram = 0;

    printf("Enter the first word: ");


    while ( ( c = getchar() ) != '\n' ) {

        if(isalpha(c)) alphabet[toupper(c) - 'A']++;
    }

    printf("Enter the first word: ");

    while ( ( c = getchar() ) != '\n' ) {

        if(isalpha(c)) alphabet[toupper(c) - 'A']--;
    }
    for (  i = 0; i < MAX; i++ ) {

        if(alphabet[i] != 0) 
        {
            is_anagram = 1;
            break;
        }

    }

    if(is_anagram == 0) printf("The words are anagrams ");
    else printf("The words are not anagrams ");

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

