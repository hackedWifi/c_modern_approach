/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Assume that debug.h is a header file with following contents:
 *                  #ifdef  DEBUG
 *                  #define PRINT_DEBUG(n) printf("Value of " #n ": %d\n, n)
 *                  #else
 *                  #define PRINT_DEBUG(n)
 *                  #endif
 *
 *                  Let testdebug.c be the following source file"
 *                  #include <stdio.h>
 *                  #define DEBUG
 *                  #include "debug.h"
 *
 *                  int main(void)
 *                  {
 *
 *                  int i = 1, j =2, k =3;
 *                  #ifdef DEBUG
 *                    printf("Output of DEBUG is defined:\n");
 *                  #else
 *                    printf("Output of DEBUG is not defined:\n");
 *                  #endif
 *
 *                  PRINT_DEBUG(i);
 *                  PRINT_DEBUG(j);
 *                  PRINT_DEBUG(k);
 *                  PRINT_DEBUG(i + j);
 *                  PRINT_DEBUG(2 * i + j - k);
 *                  
 *                  return 0;
 *                  }
 *                  (a) What is the output when the program is executed?
 *                  (b) What is the output if the #define directive is removed from 
 *                  testdebug.c
 *                  (c) Explain why the output is different in parts (a) and (b).
 *                  (d) Is it necessary for the DEBUG macro to be defined before debug.h 
 *                  is included in order for PRINT_DEBUG to have the desired effect? Justify
 *                  your answer.
 *
 * 
 *        Created:  04/12/2021 03:59:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

(a) What is the output when the program is executed?
  We need to change the #include <debug.h> to be before the #define DEBUG.
  the program outputs:
  Value of i : 1 
  Value of j : 2 
  Value of k : 3 
  Value of i + j : 3 
  Value of 2 * i + j - k: 1 
  
(b) What is the output if the #define directive is removed from 
testdebug.c
 Output of DEBUG is not defined:

(c) Explain why the output is different in parts (a) and (b).
Because the conditional directives of debug.h check for the directive DEBUG to defined in testdebug.c

(d) Is it necessary for the DEBUG macro to be defined before debug.h 
is included in order for PRINT_DEBUG to have the desired effect? Justify
your answer.

Yes. It makes sense to put #define DEBUG directive before the #include "debug.h" because debug.h brings information that
will likely be needed in several places.

