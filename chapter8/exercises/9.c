/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  10/21/2020 07:49:40 AM
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
#define HOURS 24
#define DAYS 30

int main(int argc, char *argv[]) 
{

  double tempeture_readings[DAYS][HOURS],
        average;
  int i,j ;

  printf("Days\tHours\n");
  for ( i = 0; i < DAYS; i++ ) {
    for (j = 0 ; j < HOURS; j++ ) {
      average += tempeture_readings[i][j];
    }
    printf("Average tempeture_readings %lf\n", average /= DAYS * HOURS);
  }
  return EXIT_SUCCESS;
}
