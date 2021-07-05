/*
 * =====================================================================================
 *
 *       Filename:  planet.c
 *
 *    Description:  Improve the planet.c program of Section 13.7 by having it ignore 
 *                  case when comparing command-line arguments with strings in the 
 *                  planets array.
 *                  
 *
 *        Version:  1.0
 *        Created:  03/17/2021 11:18:53 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#define NUM_PLANETS 9

int my_strcmp(char *s, char *t);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char *planets[] = { "Mercury", "Venus", "Earth",
                      "Mars", "Jupiter", "Saturn",
                       "Uranus", "Neptune", "Pluto" };

   int i, j;

  for ( i = 1 ; i < argc; i++ ) {
    for ( j = 0; j < NUM_PLANETS; j++ )  
      if( my_strcmp(argv[i] , planets[j])) {
          printf("%s is planet %d\n", argv[i], j + 1);
          break;
      }
    if ( j == NUM_PLANETS)
      printf("%s is not a planet\n", argv[i]);
  }

  
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int my_strcmp(char *s, char *t)
{
    int i;

    for ( i = 0; toupper(s[i]) == toupper(t[i]); i++ ) {
        if(s[i] == '\0')
            return 1;
    }
    /*return s[i] - t[i];*/
    return 0;
}
