/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Which of the following should not be put in a header file? Why not?
 *                  (a) Function prototypes
 *                  (b) Function definitions
 *                  (c) Macro definitions
 *                  (d) Type definitions
 *
 *
 *        Version:  1.0
 *        Created:  04/12/2021 03:54:28 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

(b) Function definitions should be in a source file. Otherwise, if the compiler encounters a
a function that has not been declared. The compiler is forced to assumed 
the return type is int and the number of parameters matches the  number of arguments
in the call of the function. 
