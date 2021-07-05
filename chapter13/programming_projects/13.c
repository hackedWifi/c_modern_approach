/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Modify the Project 15 from Chapter 8 so that it includes the following
 *                  function:
 *                  void encrypt (char *message, int shift);
 *                  The function expects message to point to a string containing the 
 *                  message to be encrypted; shift represents the amount by which each 
 *                  letter in the message is to be shifted.
 *                  
 *
 *        Version:  1.0
 *        Created:  03/27/2021 03:42:37 PM
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

void encrypt (char *message, int shift);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   int i = 0, ch = 'A', n = 0;
   char message[MAX_CHAR] = {0};
   printf("Please enter a message to be encrypted ");

   while ( ( ch = getchar() ) != '\n') {
      message[i++] = ch;

   }

   printf("Enter shift amount (1-25): ");
   scanf("%d", &n);
   encrypt(message, n);
   printf("%s\n" , message);
   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


   

void encrypt (char *message, int shift) 
{
   while( *message != '\0') {
      if(*message >= 'a' && *message <= 'z') { 
         *message = ( (*message - 'a') + shift) % 26 + 'a';
      }

      else if(*message >= 'A' && *message <= 'Z') { 
         *message = ( (*message - 'A') + shift ) % 26 + 'A';

      }
      message++;
      

   }

}
