/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  Modify Programming Project 11 from Chapter 7 so that in includes the
 *                  following function:
 *                  void reverse_name(char *name);
 *
 *                  The function expects name to point to a string containing a first 
 *                  name followed by a last name. it modifies the string so that the last
 *                  name comes first, followed by a comma, a space, the first initial, and
 *                  a period. The originta string contain extra spaces before the first
 *                  name, between the first and last names, and after the last name.
 *
 *        Version:  1.0
 *        Created:  03/24/2021 03:48:21 PM
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
#define N 50            /*  */

int read_line(char *str, int n); 
void reverse_name(char *name);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
  char name[N];
  printf("Please enter you first and last name: ");
  read_line(name, N);
  reverse_name(name);
   printf ( "\n" );
  /*printf(", %s.\n", name); */
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void reverse_name(char *name)
{
  char initial;
  do {
  } while(isspace(*name++)); 

  name--;
  initial = *name;

  while(!isspace(*name++)){
    ;
  }

  do {
    if(!isspace(*name)){
      putchar(*name);
    }

  }while(*name++);
  printf(", %c.", initial);

}

int read_line(char str[], int n)
{
  int ch, i = 0;

  while (( ch = getchar()) != '\n')
    if(i < n)
      str[i++] = ch;
  str[i] = '\0';
  return i;
}
