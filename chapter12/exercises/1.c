/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Suppose tha tthe following declarations are in effect. 
 *
 *        Version:  1.0
 *        Created:  02/11/2021 06:19:40 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

int a[] = { 5, 15, 34, 54, 14, 2, 52, 72 };
int *p = &a[1], *q = &a[5];

// 
// a) What is the value of *(p+3)?
// b) What is the value of *(q-3)
// c) What is the value of q - p?
// d) Is the condition p < q true or false?
// e) Is the condition *p < *q true or false?
//
// a)  p = 14
// b)  q = 34
// c)  4 
// d) true
// e) false
