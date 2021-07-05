/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Let color be the followint structure:
 *                  struct color {
 *                      int red;
 *                      int green;
 *                      int blue;
 *                  }
 *
 *                  (a) Write a declaration for a const variable named MAGENTA of type
 *                  struct color whose members have the values 255, 0, and 255
 *
 *                  (b) (C99) Repeat part (a), but use a designated initializer that 
 *                  doesn't specify the value of green allowing to default to 0.
 *
 *
 *        Version:  1.0
 *        Created:  04/23/2021 04:09:36 PM
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

struct color {
    int red, green, blue;
};

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
//(a)
    const struct color MAGENTA = {255,0,255};

//(b)
    const struct color MAGENTA1 = {.red = 255,.blue = 55};
    printf("Magenta is: %d", MAGENTA.green);
    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
