/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  Reverses the words in a sentence. 
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
    int c , i, j , length = 0;
    char last;
    char sentence[MAX_CHAR]= { 0 };
    
    while ( (c = getchar()) != '\n' ) {
        if( c == '?'  || c == '.' || c == '!'  ) {
        last = c;
        }
        else {
            sentence[i++] = c;
            length++;
        }

    }

  for (i = length; i >= 0; i--) {
      if(sentence[i] == ' ' || i == 0) {
          if(i == 0) i--;
          
          for(j = i + 1; j <= length; j++) {
          printf("%c", sentence[j]);
          if(sentence[j] == ' ') break;
          }
    }
      
  }
  
  printf("%c", last);
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

