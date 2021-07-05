/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  The following function is supposed to print an error message. Each
 *                  message is preceded by an integer, indicating the number of times 
 *                  the function has been called. Unforturnately, the function always
 *                  displays 1 as the number of error message. Locate the error and show
 *                  how to fix it without making any changes outside the function.
 *
 *        Version:  1.0
 *        Created:  05/18/2021 06:21:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdio.h>
void print_error(const char *message)
{
    static int n = 1;
    // modify the storage duration from automatic to static on variable n.
    printf( "Error %d: %s\n", n++, message );
}

int main()
{
    print_error("First called");

}
