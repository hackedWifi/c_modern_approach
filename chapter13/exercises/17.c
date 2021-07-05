/*
 * =====================================================================================
 *
 *       Filename:  17.c
 *
 *    Description:  Write the following function:
 *                  bool test_extension(const char *file_name, const char *extension);
 *                  file_name points to a string containing a file name. The function 
 *                  should return true if the file's extension matches the string pointed
 *                  by the extension, ignoring the case of letters. For example, the call 
 *                  test_extension("memo.txt", "TXT") would return true. Incorporate 
 *                  the "search for the end of a string: idiom into your function. HINT:
 *                  Use the toupper function to convert characters to upper-case before
 *                  comparing them.
 *
 *        Version:  1.0
 *        Created:  03/08/2021 01:22:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <ctype.h>
#include <stdbool.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
void get_extension(const char *file_name, char *extension);
bool test_extension(const char *file_name, const char *extension);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{

    char s[]= "memo.psy";
    char str_to_compared[] = "psy";
    printf("%d ", test_extension(s, str_to_compared));
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  test_extension
 *  Description:  
 * =====================================================================================
 */


bool test_extension(const char *file_name, 
                    const char *extension)
{
    while (*file_name)
    {
        if (*file_name++ == '.')
        {
            while (*file_name)
                if (toupper(*file_name++) != toupper(*extension++))
                    return false;
            return true;
        }
    }
    return false;
}
