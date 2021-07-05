/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Supposed that high, low, and middle are all pointer variables of the
 *                  same type, and that low and high point to elements of an array. 
 *                  Why is the following statement illegal, and how could it be fixed?
 *        Version:  1.0
 *        Created:  02/10/2021 11:08:17 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

middle = (low + high) / 2;

// it is illegal because pointers can not be added.
// It can be fixed like this
// middle = low + (high - low) / 2;
