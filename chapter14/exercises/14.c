/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  Show what the following  program will look like after preprocessing.
 *                  Some lines of the program may cause compilation error; find all such
 *                  errors.
 *
 *        Version:  1.0
 *        Created:  04/09/2021 04:30:54 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define N 10      /*  */
#define INC(x) ((x)+1) // contains error
#define SUB(x,y) ((x)-(y))         /* contains errors */
#define SQR(x) ((x)*(x))
#define CUBE(x) (SQR((x)*(x))) /* contains  */
#define M1(x,y) x##y//contains error
#define M2(x,y) #x #y // contains error

int main(void) 
{
  int a[N], i, j, k;
#ifdef N
  i = j;
  // i = j
#else
  j = i;
#endif
  i = 10 * INC(j);
  // i = 10 * (j+1);
  i = SUB(j,k);
  // i = (j-k);
  i = SQR(SQR(j));
  // i = (j * j)*(j*j)
  i = CUBE(j);
  // i = (j*j)*(j)
  i = M1(j, k);
  // jk
  puts(M2(i, j));
  // puts("i", "j")

#undef SQR
  i = SQR(j);
#define SQR
  i = SQR(j);
  return 0;

}

