/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Modify Programming Project 5 from Chapter 7 so tha it includes the 
 *                  following function: 
 *                  int compute_scrambble_value(const char *word);
 *                  The function returns the SCRAMBBLE value of the string pointed to 
 *                  by word.
 *
*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int compute_scrambble_value(const char *word);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char word[20] = {0};
  printf("Enter a word: ");
  scanf("%s" , word);
  printf("Scramble value: %d", compute_scrambble_value(word));
  printf("\n");

    return EXIT_SUCCESS;

}

int compute_scrambble_value(const char *word)
{
  int count = 0;

    do {    switch ( toupper(*word) ) {
      case 'A':	
      case 'E':	
      case 'I':	
      case 'L':	
      case 'N':	
      case 'O':	
      case 'R':	
      case 'S':	
      case 'T':	
      case 'U':	
        count += 1;
        break;

      case 'D':	
      case 'G':	
        count += 2;
        break;

      case 'B':	
      case 'C':	
      case 'M':	
      case 'P':	
        count += 3;
        break;
      case 'F':	
      case 'H':	
      case 'V':	
      case 'W':	
      case 'Y':	
        count += 4;
        break;

      case 'K':	
        count += 5;
        break;
      case 'J':
      case 'X':
        count += 8;
        break;
      case 'Q':
      case 'Z':
        count += 10;

        break;
      default:	
        putchar(*word);
        break;
    } 
				/* -----  end switch  ----- */
  } while(*word++) ;
    return count;
}
