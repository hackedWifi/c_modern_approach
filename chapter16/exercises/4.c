/*
 * =====================================================================================
 *
 *       Filename:  4.c
 *
 *    Description:  Repeat exercise3, but this time using typedef named Complex 
 *
 *        Version:  1.0
 *        Created:  04/20/2021 03:49:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
// (a) 
typedef struct {
    double real, imaginary;
} Complex;

Complex make_complex(double a, double b);

int main ( int argc, char *argv[] )
{
    //b
    Complex c1, c2, c3;


    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

Complex make_complex(double a, double  b)
{
    Complex d;
    d.real = a;
    d.imaginary = b;
    
    return d;
}

Complex add_complex(Complex a, Complex b)
{
    return (Complex){a.real + b.real, a.imaginary + b.imaginary};
}
