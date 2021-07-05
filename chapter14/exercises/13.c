/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  (a) Show what the following program will lok like after prepocessing. 
 *                  You may ignore any lines added to the program as a result of 
 *                  including <stdio.h> header.
 *
 *                  (b) What will be the output of this program?
 *
 *        Version:  1.0
 *        Created:  04/09/2021 04:17:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

/*#include <stdio.h>*/
/*#define N 100*/

/*void f(void);*/

/*int main(void)*/
/*{*/
  /*f();*/
/*#ifdef N*/
/*#undef N*/
/*#endif*/
  /*return 0;*/

/*}*/

/*void f(void)*/
/*{*/
/*#if defined(N)*/
  /*printf("N is %d\n", N);*/
/*#else*/
  /*printf("N is undefined\n");*/
/*#endif*/
/*}*/
#include <stdio.h>
#define N 100

void f(void);

int main(void)
{
  f();
  return 0;

}

void f(void)
{
  printf("N is undefined \n");
}
