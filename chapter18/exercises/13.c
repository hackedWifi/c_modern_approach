/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Which of the following declarations are legal? (Assume that PI is a 
 *                  macro that represents 3.14159).
 *
 *        Version:  1.0
 *        Created:  05/19/2021 03:59:46 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (a) char c = 65;
// Legal
// (b) static int i = 5, j = i * i;
// Illegal. The initializer for an static variable needs to be constant 
//
// (c) double d = 2 * PI;
// Legal
//
// (d) double angles[] = {0, PI / 2, PI, 3 * PI / 2};
// Legal
