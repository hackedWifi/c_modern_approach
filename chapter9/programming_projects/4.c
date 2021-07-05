/*
 * =====================================================================================
 *
 *       Filename:  4.c
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
#include <stdbool.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#define MAX 26
void  read_word(int counts[26]);
bool equal_array(int counts[26], int counts2[26]);
int main ( int argc, char *argv[] )
{
    int word[MAX], word1[MAX] = { 0 }; 
   
    printf("Enter the first word: ");
    read_word(word);
    read_word(word1);

    printf("%d ", equal_array(word, word1));
    return EXIT_SUCCESS;

}

void read_word(int counts[26]) 
{
    int c = 0;
    printf("Enter a word: ");

    while ( ( c = getchar() ) != '\n' ) {

        if(isalpha(c)) counts[toupper(c) - 'A']++;
    }

}

bool equal_array(int counts[26], int counts2[26]) 
{
    for (  int i = 0; i < 26; i++ ) {

        if(counts[i] != counts2[i]) 
        {
            return false;
        }
        else
            return false;
    }
    return true;

}	

