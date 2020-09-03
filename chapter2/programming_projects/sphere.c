/*
 * =====================================================================================
 *
 *       Filename:  sphere.c
 *
 *    Description:  Computes the volume of a sphere with a 10-meter radius 
 *
 *        Version:  1.0
 *        Created:  08/13/2020 03:37:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto (), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include	<stdlib.h>

#define PI 3.14f

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

  float r = 10;
  float volume = 4.0f/3.0f * PI * (r*r*r);
  printf ( "The volume of a sphere is: %f\n", volume);
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
