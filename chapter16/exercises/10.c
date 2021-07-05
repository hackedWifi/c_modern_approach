/*
 * =====================================================================================
 *
 *       Filename:  10.c
 *
 *    Description:  The following structures are designed to store information about
 *                  objects on a graphics screen:
 *
 *                  struct point { int x, y };
 *                  struct rectangle { struct point upper_left, lower_right };
 *                  
 *                  A point structure stores the x and y coordinates of a point on the 
 *                  screen. A rectangle stores the coordinates of the upper left and 
 *                  lower right corners of a rectangle. Write functions that perform the
 *                  following operations on a rectangle structure r passed as an argument:
 *
 *                  (a) Compute the area of r;
 *
 *                  (b) Compute the center of r, returning it as a point value. If either 
 *                  the x or y coordinate of the center isn't an interger, store its 
 *                  truncated value in the point structure.
 *
 *                  (c) Move r by x units in the x direction and y units in the y direction,
 *                  returning the modified version of r. (x and y are additional arguments
 *                  to the function.)
 *
 *                  (d) Determine whether a point p lies within r, returning true or false.
 *                  (p is an additional argument of type struct point.)
 *
 *
 *        Version:  1.0
 *        Created:  04/24/2021 04:26:24 PM
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
#define TRUE 1
#define FALSE 0

struct point { int x , y; };
struct rectangle { struct point upper_left, lower_right; };

int area(struct rectangle r);
struct point center(struct rectangle r);
struct rectangle move(struct rectangle r, int x, int y); 
int in_rectangule(struct rectangle r, struct point p);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    struct rectangle r = {{3,4}, {10,9}};
    struct point c = {10,9};
    /*printf("Area of r is: %d", area(r));*/
    printf("Point c is in rectangle: %d", in_rectangule(r,c));
    /*printf("Center is: x %d and y %d", c.x, c.y) ;*/
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

int area(struct rectangle r) 
{
    return ( r.lower_right.x - r.upper_left.x) * (r.lower_right.y - r.upper_left.y);
}

struct point center(struct rectangle r)
{
    struct point center;
    center.x = (r.lower_right.x + r.upper_left.x) / 2 ;
    center.y = (r.lower_right.y + r.upper_left.y) / 2 ;
    return center;

}
struct rectangle move(struct rectangle r, int x, int y)
{
    r.upper_left.x += x;
    r.upper_left.y += y;
    r.lower_right.x += x;
    r.lower_right.y += y;

    return r;

}

int in_rectangule(struct rectangle r, struct point p)
{
        return (p.x >= r.upper_left.x && p.x <= r.lower_right.x &&
            p.y >= r.upper_left.y && p.y <= r.lower_right.y)? TRUE : FALSE;
}



