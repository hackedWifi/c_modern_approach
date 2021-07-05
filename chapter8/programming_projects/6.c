/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Reads a message and translates it into B1FF-speak. 
 *
 *        Version:  1.0
 *        Created:  11/02/2020 01:39:31 PM
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
#define MAX 100
int main ( int argc, char *argv[] )
{
  int i;
  char c;
  char message[MAX] = {0}; 
  
  printf("Enter a message: ");
  while(( c = getchar() ) != '\n' && i < MAX) 
  {
      message[i++] = c;
  }

    printf("In B1FF speak: ");
  for ( i = 0; i < MAX; i++ ) {
   
    switch ( c = toupper(message[i])) {
      case 'A':	
        putchar('4');
        break;
      case 'B':
        putchar('8');
        break;
      case 'E':
        putchar('3');
        break;
      case 'I':
        putchar('1');
        break;
      case 'O':
        putchar('0');
        break;
      case 'S':
        putchar('5');
        break;
      default:	

        putchar(c);
        break;
    }	
  }
  printf("!!!!!!!!!!\n");
   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

