/*
 * =====================================================================================
 *
 *       Filename:  dweight2.c
 *
 *    Description:  Computes the dimesional weight of a box from input provided by the
 *                  user.
 *
 *        Version:  1.0
 *        Created:  08/07/2020 10:23:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto (), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>

int main(void) {
  int height, length, width, weight, volume;

 printf ( "Enter height box:\n" );
 scanf("%d", &height);
 printf("enter length of box:\n");
 scanf("%d", &length);
 printf("Enter width of box:\n");
 scanf("%d", &width);
 volume = height * length * width;
 weight = (volume + 165) / 166;

 printf("Volume (cubic inches): %d\n", volume);
 printf("Dimensional weight (pounds): %d\n", weight);

 return 0;
}

