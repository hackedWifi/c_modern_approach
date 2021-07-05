/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Translates an alphabetic phone number into numberic form.
 *
 *        Version:  1.0
 *        Created:  11/06/2020 10:34:22 PM
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
#include <ctype.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   int c = 0 , i= 0;
   char phone[15];
   /* char letters[8][3] = { {'A','B','C'},*/
   /*{'D','E','F'},*/
   /*{'G','H','I'},*/
   /*{'J','K','L'},*/
   /*{'M','N','O'},*/
   /*{'Q','R','S'},*/
   /*{'T','U','V'},*/
   /*{'W','X','Y'}};*/

   printf("Please enter a phone number: " );
   while( ( c = getchar()) != '\n' && i < 15) {
         phone[i++] = toupper(c);
   }
   printf("In numeric form: ");

   for ( i = 0 ; i < 15; i++ ) {

      switch ( phone[i] ) {
         case 'A':	
         case 'B':	
         case 'C':	
            phone[i] = '2';
            break;
         case 'D':	
         case 'E':	
         case 'F':	
            phone[i] = '3';
            break;
         case 'G':	
         case 'H':	
         case 'I':	
            phone[i] = '4';
            break;
         case 'J':	
         case 'K':	
         case 'L':	
            phone[i] = '5';
            break;
         case 'M':	
         case 'N':	
         case 'O':	
            phone[i] = '6';
            break;
         case 'P':	
         case 'Q':	
         case 'R':	
            phone[i] = '7';
            break;
         case 'S':	
         case 'T':	
         case 'U':	
            phone[i] = '8';
            break; 
         case 'V':	
         case 'W':	
         case 'Y':	
            phone[i] = '9';
            break;
         default:	
            break;
      }				/* -----  end switch  ----- */
      printf("%c ", phone[i]); 
   }

   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
