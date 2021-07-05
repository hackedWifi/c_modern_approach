/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Suppose that a is a one-dimensional array and p is a pointer variable.
 *                  Assuming that the assignment p = a has just been performed, which
 *                  of the following expressions are illegal because of mismatched types?
 *                  Of the remaining expressions, which are true (have a nonzero value)?
 *
 *        Version:  1.0
 *        Created:  02/12/2021 09:57:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

//a) p == a[0]
//a is illegal p is a pointer variable and a[0] is an int
//b) p == &a[0]
// b is legal because is pointing to the address of a
//c) *p == a[0]
// c is legal 
//d) p[0] == a[0]
//d is legal 
