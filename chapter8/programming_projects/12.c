/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Computes the value of a word by summing the value of its letters 
 *                  based in the SCRAMBLE CROSSWORD GAME.
 *
 *        Version:  1.0
 *        Created:  10/08/2020 04:01:26 PM
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
  int input;
  int i;
  int count = 0;
  int alpha[26] = {1,3,3,2,1,4,2,4,
                  1,8,5,1,3,1,1,3,10,
                  1,1,1,1,4,4,8,4,10};
  printf("Enter a word: ");
  while( (input = getchar())!= '\n'){
   count += alpha[toupper(input) - 'A' ];
   /* switch ( toupper(input) ) {*/
      /*case 'A':	*/
        /*count += alpha[0];*/
        /*break;*/
      /*case 'E':	*/
        /*count += alpha[4];*/
        /*break;*/
      /*case 'I':	*/
        /*count += alpha[8];*/
        /*break;*/
      /*case 'L':	*/
        /*count += alpha[11];*/
        /*break;*/
      /*case 'N':	*/
        /*count += alpha[13];*/
        /*break;*/
      /*case 'O':	*/
        /*count += alpha[14];*/
        /*break;*/
      /*case 'R':	*/
        /*count += alpha[17];*/
        /*break;*/
      /*case 'S':	*/
        /*count += alpha[18];*/
        /*break;*/
      /*case 'T':	*/
        /*count += alpha[19];*/
        /*break;*/
      /*case 'U':	*/
        /*count += alpha[20];*/
        /*break;*/

      /*case 'D':	*/
        /*count += alpha[3];*/
        /*break;*/
      /*case 'G':	*/
        /*count += alpha[6];*/
        /*break;*/

      /*case 'B':	*/
        /*count += alpha[1];*/
        /*break;*/
      /*case 'C':	*/
        /*count += alpha[2];*/
        /*break;*/
      /*case 'M':	*/
        /*count += alpha[12];*/
        /*break;*/
      /*case 'P':	*/
        /*count += alpha[15];*/
        /*break;*/
      /*case 'F':	*/
        /*count += alpha[5];*/
        /*break;*/
      /*case 'H':	*/
        /*count += alpha[7];*/
        /*break;*/
      /*case 'V':	*/
        /*count += alpha[21];*/
        /*break;*/
      /*case 'W':	*/
        /*count += alpha[22];*/
        /*break;*/
      /*case 'Y':	*/
        /*count += alpha[24];*/
        /*break;*/

      /*case 'K':	*/
        /*count += alpha[10];*/
        /*break;*/
      /*case 'J':*/
        /*count += alpha[9];*/
        /*break;*/
      /*case 'X':*/
        /*count += alpha[23];*/
        /*break;*/
      /*case 'Q':*/
        /*count += alpha[16];*/
        /*break;*/
      /*case 'Z':*/
        /*count += alpha[25];*/
        /*break;*/
      /*default:	*/
        /*putchar(input);*/
        /*break;*/
    /*}		<]		[> -----  end switch  ----- */
  }
  printf("Scramble value: %d", count);
  printf ( "\n" );

    return EXIT_SUCCESS;
  }				/* ----------  end of function main  ---------- */

