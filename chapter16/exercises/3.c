/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  (a) Show how to declare a tag named complex for a structure with two
 *                  members, real and imaginary, of type double.
 *
 *                  (b) Use the complex tag to declare variables named c1, c2, c3.
 *
 *                  (c) Write a function named make_complex that stores its two arguments
 *                  (both of type double) in a complex structure, then returns the 
 *                  structure.
 *
 *                  (d) Write a function named add_complex that adds the corresponding
 *                  members of its arguments (both complex structures), then returns the
 *                  result (another complex structure.)
 *
 *        Version:  1.0
 *        Created:  04/20/2021 03:09:04 PM
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

struct complex make_complex(double a, double b);
struct complex add_complex(struct complex a, struct complex b);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */

//(a)
 struct complex {
    double real, imaginary;
  };

int main ( int argc, char *argv[] )
{
 
// (b)
  struct complex c1, c2, c3;


} // end of main

// (c)
struct complex make_complex(double a, double b) {
  struct complex c4;
  c4.real = a;
  c4.imaginary = b;
  return c4;
}

// (d)
struct complex add_complex(struct complex a, struct complex b)
{
  struct complex result;
  result.real = a.real + b.real;
  result.imaginary = a.imaginary + a.imaginary;

  return result;
}

