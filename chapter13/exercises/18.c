/*
 * =====================================================================================
 *
 *       Filename:  18.c
 *
 *    Description:  Write the following function:
 *                  void remove_filename(char *url);
 *                  url points to a string containing a URL (Uniform Resource Locator)
 *                  that ends with a file name (such as "http://knking.com/index.html").
 *                  The function should modify the string by removing the file name and
 *                  preceding slash. (In this example, the result will be "http://www.
 *                  knking.com".) Incorporate the "search for the end of a string" 
 *                  idiom into your  function. HINT: Have the function replace the last 
 *                  slash in the string by a null character.
 *
 *        Version:  1.0
 *        Created:  03/09/2021 11:07:22 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
void remove_filename(char *url);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char str[] = "http://knking.com/index.html/";
    remove_filename(str);
    puts(str);
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void remove_filename(char *url)
{
    for(url = url + strlen(url) - 1; *url; url--)
    {
        if(*url == '/')
        {
            *url = '\0';
            break;
        }


    }

} 

