/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  List the storage duration (static or automatic), scope (block or fi-
 *                  le), and linkage (internal, external, or none) of each variable and 
 *                  parameter in the following function.
 *
 *        Version:  1.0
 *        Created:  05/18/2021 10:10:50 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

extern float a;
// external linkage,
// file scope
// static storage
void f(register double b)
{
    // void function f
    // external linkage
    // file scope
    // static storage

    // register double b
    // automatic storage
    // no linkage
    // block scope


    static int c;
    // no linkage
    // static storage
    // block scope
    auto char d;
    // automatic storage
    // no linkage
    // block scope
}

