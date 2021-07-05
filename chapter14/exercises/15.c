/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  Supppose the program needs to display messages in either English,
 *                  French, or Spanish. Using conditional compilation, write a program
 *                  fragment that displays one of the following three messages, depending 
 *                  on whether or no the specified macro is defined:
 *
 *        Version:  1.0
 *        Created:  04/11/2021 03:33:56 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define SPANISH/*  */

int main(void) 
{
#if defined ENGLISH
  printf("Insert Disk 1\n");
#elif defined FRENCH
  printf("Inserez Le Disque 1\n");
#else
  printf("Inserte el Disco 1\n");
#endif
}
