/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  Write the following function:
 *                  void get_extension(const char *file_name, char *extension);
 *                  file_name point to a string containing a file name. the function 
 *                  should store the extension on the file name in the string pointed to
 *                  by extension. For example, if the file name is "memo.txt", the 
 *                  function will store "txt" in the string pointed by the extension. If
 *                  the file name doesn't have an extension, the function should store 
 *                  an empty string (a single null character) in the string pointed to 
 *                  by the extension. Keep the function as simple as possible by having
 *                  it use the strlen and strcpy function.
 *                 
 *
 *
 *        Version:  1.0
 *        Created:  03/05/2021 10:16:50 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <string.h>
#include <stdio.h>
#include <stdlib.h>

void get_extension(const char *file_name, char *extension);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char file[] = "mrmo.py";
    char ext[] = "t";
    get_extension(file, ext);
    puts(ext);
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void get_extension(const char *file_name, char *extension)
{
        int i = 0;
    for( i = strlen(file_name); ;i--)
    {
    if( file_name[i] == '.')
    {
    strcpy(extension, &file_name[i + 1]);
    break;
    }
    else {
    strcpy(extension, "\0");
    }

    }

   
    
}

