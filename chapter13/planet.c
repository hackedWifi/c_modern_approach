/*
 * =====================================================================================
 *
 *       Filename:  planet.c
 *
 *    Description:  Checks planet names 
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

#define NUM_PLANETS 9
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
    for ( j = 0; j < NUM_PLANETS; j++ ) {
      if(strcmp(argv[i], planets[j] ) == 0) {
        printf("%s is planet %d\n", argv[i], j + 1);
        break;
      }
    }
      if ( j == NUM_PLANETS)
        printf("%s is not a planet\n", argv[i]);
  }
  
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

