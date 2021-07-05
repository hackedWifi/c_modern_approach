/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Section 15.1 listed several advantages of dividing a program into 
 *                  multiples sources files. 
 *                  (a) Describe several other advantages 
 *                  (b) Describe some disadvantages 
 *
 *
 *
 *
 *        Version:  1.0
 *        Created:  04/12/2021 03:50:37 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


 (a) Describe several other advantages 
It is easy to maintain by other developers.
If the make tool is used, a config.h can be created to make changes fast and easy
to the final program.

(b) Describe some disadvantages
An extra command tool is needed to keep compiled and link source files properly.
Make sure that all the header files are included in every source file where is needed
