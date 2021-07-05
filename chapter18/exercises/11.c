/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  In Section 18.4, we saw that the following declarations are illegal:
 *
 *                  int f(int) []; functions can't return arrays.
 *                  int g(int) (int); functions can't return functions.
 *                  int a[10] (int); array elements can't have functions.
 *                  
 *                  We can however, achieve similar effects by using pointer: a function
 *                  can return a pointer the the first element in array, a function can
 *                  return a pointer to a function, and the elements of an array can be 
 *                  pointers to functions. Revise each of the declarations accordingly.
 *
 *        Version:  1.0
 *        Created:  05/19/2021 03:28:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (a) int *f(int); 
//
// (b) int (*g(int) (int);
//
// (c) int (*a[10]) (int);
