/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Write the following function:
 *                  void build_index_url(const char *domain, char *index_url);
 *                  domain points to a string containing an Internet domain, such as
 *                  "knking.com". The function should add "http://www." to the beginning
 *                  of this string and "/index.html" to the end of the string, storing
 *                  the result in the string pointed to by index_url. (In this example,
 *                  the result will be "http://www.knking.com/index.html".) You may 
 *                  assume that index_url points to a variable  that is long enough to 
 *                  hold the resulting string. Keep the function as simple as possible 
 *                  by having it use the strcat and strcpy functions.
 *
 *        Version:  1.0
 *        Created:  03/06/2021 09:35:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
void build_index_url ( const char *domain, char *index_url );
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char domain[25] = "knking.com";
    char index_url[100] = "";
    build_index_url(domain, index_url);
    puts(index_url);
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  void build_index_url
 *  Description:  
 * =====================================================================================
 */
void build_index_url ( const char *domain, char *index_url )
{
    char http[] = "https://www.";
    char path[] = "/index.html";
    strcpy(index_url, http);
    strcat(index_url, domain);
    strcat(index_url, path);
}		/* -----  end of function void build_index_url  ----- */
