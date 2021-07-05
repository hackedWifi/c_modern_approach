/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Write a function that splits total seconds since midnight into
 *                  hours, minutes and seconds
 *
 *        Version:  1.0
 *        Created:  01/07/2021 08:36:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdio.h>

void split_time( long total_sec, int* hr , int *min, int *sec);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int total_sec = 77260;
    int hr, min, sec;
    split_time(total_sec, &hr, &min, &sec);
    printf ( "The time is %d:%d:%d\n", hr, min, sec );
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void split_time( long total_sec, int* hr , int *min, int *sec)
{
    *hr = total_sec / 3600;
    *min = (total_sec / 60) - *hr * 60;
    *sec = total_sec - (*hr * 3600) - (*min * 60); 
    

}
