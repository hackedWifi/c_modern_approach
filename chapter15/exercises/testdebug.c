/*
 * =====================================================================================
 *
 *       Filename:  testdebug.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/12/2021 10:40:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define DEBUG
#include "debug.h"
                            
int main(void)
{
                            
int i = 1, j =2, k =3;
#ifdef DEBUG
  printf("Output of DEBUG is\n");
#else
  printf("Output of DEBUG is\n");
#endif
                            
PRINT_DEBUG(i);
PRINT_DEBUG(j);
PRINT_DEBUG(k);
PRINT_DEBUG(i + j);
PRINT_DEBUG(2 * i + j - k);
return 0;
}
