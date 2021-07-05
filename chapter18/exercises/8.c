/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Write a complete description of the type of x as specified by each of
 *                  the following declarations.
 *
 *        Version:  1.0
 *        Created:  05/18/2021 07:07:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
// (a) char (*x[10]) (int);
//   array of pointer to functions with an int parameter that returns a char.
//
// (b) int (*x(int)) [5];
//  a function that returns a pointer to an array of int .
//
// (c) float *(*x(void)) (int);
// a pointer to a function with with no parameter that returns a pointer to a  function
// with an int parameter and return float value
//
// (d) void (*x(int, void (*x) (int))) (int);
// a pointer to a function with two parameters. An int parameter and function pointer 
// parameter with an int parameter that returns no value.  X takes an int parameter 
// and returns a pointer to a function with an interger parameter and returns no value.
//

