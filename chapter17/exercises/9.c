/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  True of False: If x is a structure and a is a member of that structure
 *                  then (&x)->a is the same as x.a. Justify your answer.
 *
 *        Version:  1.0
 *        Created:  05/05/2021 05:06:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// Yes, it is. With the ampersand we are accessing the address of the member in that 
// structure and with arrow operator we are modifying its contents
