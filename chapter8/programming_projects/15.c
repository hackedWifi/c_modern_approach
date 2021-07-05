/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  A program that encrypts a message using a Caesar cipher. The user
 *                  will enter the message to be encrypted and shift amount.
 *
 *        Version:  1.0
 *        Created:  11/12/2020 10:21:05 PM
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
#define MAX_CHAR 80
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   int i = 0, ch = 'A', n = 0;
   int message[MAX_CHAR] = {0};
   printf("Please enter a message to be encrypted ");
   while ( ( ch = getchar() ) != '\n') {
      message[i++] = ch;

   }

   printf("Enter shift amount (1-25): ");
   scanf("%d", &n);


   i = 0;
   while( message[i] != '\0') {
      if(message[i] >= 97 && message[i] <= 122) { 
         message[i] = ( (message[i] - 97) + n ) % 26 + 97;

         printf("%c ", message[i++]);
      }

      else if(message[i] >= 65 && message[i] <= 90) { 
         message[i] = ( (message[i] - 65) + n ) % 26 + 65;

         printf("%c ", message[i++]);
      }
      else {

         printf("%c ", message[i++]);

      }

   }
   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

