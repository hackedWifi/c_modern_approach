/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  We saw that writing #include <file> instead of #include "file" may
 *                  not work if file is one that we've written. Would there be any 
 *                  problem with writing #include "file" instead of #include <file> if
 *                  file is a system file?
 *
 *        Version:  1.0
 *        Created:  04/12/2021 03:57:02 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

Problems can arise if we were to write #include "file" if the "file" is a system file. Due
to the #include searching OS directories first. Imagine if we had a "foo.h" in the current
directory, but wanted to use "foo.h" from the system. The compiles will use "foo.h" from 
the current directory instead of the one from the system directory.
