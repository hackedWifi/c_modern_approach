/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  For each of the following declarations, identify the storage class,
 *                  type qualifiers, type specifiers, declarators, and initializers.
 *
 *        Version:  1.0
 *        Created:  05/15/2021 10:01:36 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

(a) static char **lookup(int level);
    // static is storage class, 
    // char is a type specifier,
    // ** type specifier, 
    // lookup is declarator,
    // int is type specifier,
    // level is declarator.
(b) volatile unsigned long io_flags;
    // volatile is type qualifier,
    // unsigned long is type specifier,
    // io_flags is declarator
(c) extern char *file_name[MAX_FILES], path[];
    // extern is storage class, 
    // char is type specifier,
    // * is type specifier,
    // file_name is declarator,
    // [MAX_FILES] is declarator,
    // path is a declarator,
    // [] is a type specifier
(d) static const char token_buf[] = "";
    // static is storage class,
    // const is type qualifier,
    // char is type specifier,
    // token_buf is declarator,
    // [] is type specifier,
    // "" is initializer
