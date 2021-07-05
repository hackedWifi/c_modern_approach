/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  Modify Project 14 from Chapter 8  so that it stores the words in a 
 *                  two-dimensional char array as it reads the sentnce, with each row of
 *                  the array storing a singe word. Assume that the sentennce
 *
 *
 *        Version:  1.0
 *        Created:  03/26/2021 04:07:08 PM
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
#define MAX_CHAR 20 
#define WORD 30
int main ( int argc, char *argv[] )
{
    int c = 0 , i = 0, j = 0;
    char last = 0;
    char sentence[WORD][MAX_CHAR + 1] ;
    
    
    while(( c = getchar() ) != '\n' && i < WORD - 1 ) {
      if(c == ' ' || c == '\t'){
        sentence[i][j] = '\0';
        i++;
        j = 0;
        continue;
      }

      if( c == '?'  || c == '.' || c == '!'  ) {
        last = c;
        sentence[i][j] = '\0';
        break;
        }

      else if( j < MAX_CHAR) {
        sentence[i][j++] = c;
      }
    }

    while( i > 0) {
          printf("%s ", sentence[i--]);
        }
    printf("%s%c", sentence[i], last);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


