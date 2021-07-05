/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  Assume that the following macro definitions are in effect:
 *                  #define IDENT(x) PRAGMA(ident #x)
 *                  #define PRAGMA(x) _pragma(ident #x)
 *
 *        Version:  1.0
 *        Created:  04/11/2021 03:46:11 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#define IDENT(x) PRAGMA(ident #x)
#define PRAGMA(x) _Pragma(#x)

int main(void)
{
  
  IDENT(foo);
// #pragma indent "foo"
}
