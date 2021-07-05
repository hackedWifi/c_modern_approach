/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Supposed that we declared x to be a const object. Which one of the 
 *                  following statements about x is false?
 *
 *        Version:  1.0
 *        Created:  05/18/2021 06:28:45 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (a) If x is of type int, it can be used as the value of a case label in a switch state-
// ment.
//
/// False const variables cannot be used  as a replacement for define macros. Const means 
// that its value cannot be modified. In other words is a read only variable.
//
// (b) The compiler will check that no assignment is made to x.
//
// True the compiler checks for assignment to const variables.
//
// (c) x is subject to the same scope rules as variables.
// True. const variable are subject to the same rules
//
// (d) x can be of any type.
// True. 
