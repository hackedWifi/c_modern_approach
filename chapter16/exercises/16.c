/*
 * =====================================================================================
 *
 *       Filename:  16.c
 *
 *    Description:  Which of the following statements about enumeration constants are 
 *                  true?
 *
 *                  (a) An enumeration constant may represent any integer represent by 
 *                  the programmer.
 *                   
 *                  (b) Enumeration constants have exactly the same properties as cons-
 *                  tants created using #define.
 *
 *                  (c) Enumeration constants have the values 0, 1, 2, ... by default.
 *
 *                  (d) All constants in a enumeration must have different values.
 *
 *                  (e) Enumeration constants may be used as integers in expressions.
 *
 *        Version:  1.0
 *        Created:  04/26/2021 11:16:18 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (a) Yes

// (b) No, enumeration are subject to C's scope rules.

// (c) Yes, if no values are assigned by the programmer. They are defaulted to 0,1,2...

// (d) No, they can have the same values but have different names than the identifiers
// declared in the same scope.

// (e) Yes, enumeration can be used as integers. But is dangerous to use integers as
// a enumeration values.
