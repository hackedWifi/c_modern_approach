/*
 * =====================================================================================
 *
 *       Filename:  9.c
 *
 *    Description:  Write the following  functions. (The color structure is defined in 
 *                  Exercise 8.)
 *
 *                  (a) struct color make_color(int red, int green, int blue);
 *                  Returns a color structure containing the specified red, green, and
 *                  blue values. If any arguments is less than zero, the corresponding
 *                  member of the structure will contain zero instead. If any argument
 *                  is greater that 255, the corresponding member will contain 255.
 *
 *                  (b) int getRed(struct color c);
 *                  Returns the value of c's red member.
 *
 *                  (c) bool equal_color(struct color color1, struct color color2);
 *                  returns true if the corresponding members of color1 and color2 are
 *                  equal.
 *
 *                  (d) struct color brighter(struct color c);
 *                  Returns a color structure that represents a brighter version of the
 *                  color c. The structure is identical to c, except that each member has
 *                  been divided by 0.7 (with the result truncated to an integer). 
 *                  However, there are three special cases: (1) If all members of c are
 *                  zero, the function returns a color whose members all have the value 3.
 *                  (2) If any member of c is greater than 0 but less than 3, it is 
 *                  replaced by 3 before the division by 0.7. (3) If dividing by 0.7 
 *                  causes a member to exceed 255, it is reduced to 255.
 *
 *                  (e) struct color darker(struct color c);
 *                  Returns a colors structure that represents a darker version of the 
 *                  color version of the color c. The structure is identical to c, 
 *                  except that each  member has been multiplied by 0.7 (with the result
 *                  truncated to an integer).
 *
 *
 *
 *
 *        Version:  1.0
 *        Created:  04/23/2021 04:19:06 PM
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
#include <stdbool.h>

struct color make_color(int red, int green, int blue);
int getRed(struct color c);
bool equal_color(struct color color1, struct color color2);
struct color brighter(struct color c);
struct color darker(struct color c);

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
    struct color a = { 255, 0, 0 };
    struct color b = brighter(a); 
    /*struct color a = make_color(-255, 0, 255);*/
    printf("Result is: %d %d %d", b.red, b.green, b.blue);

    
        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
struct color make_color(int red, int green, int blue)
{
    if(red < 0)
        red = 0; 
    else if (red > 255) 
        red = 255;
    else if(green < 0) 
        green = 0; 
    else if(green > 255)
        green = 255;
    else if(blue < 0)
        blue = 0;
    else if(blue > 255)
        blue = 255;
   return (struct color) {red, green, blue };
}

int getRed(struct color c)
{
    return c.red;
}

bool equal_color(struct color color1, struct color color2)
{
    return (color1.green == color2.green && color1.red == color2.red &&
            color1.blue == color2.blue)?  true : false;

}

struct color brighter(struct color c) 
{
    struct color brighter;
    brighter.red = c.red / 0.7;
    brighter.green = c.green / 0.7;
    brighter.blue = c.blue / 0.7;
   
// (1) if all members of c are 0 set brighter to 3
   if(c.red == 0 && c.green == 0 && c.blue == 0)
    {
        brighter.red = 3;
        brighter.green = 3;
        brighter.blue = 3;
    }
// (2) If any member of c > 0 && and c < 3
    if(c.red > 0 && c.red < 3)
        c.red = 3;
    if(c.green > 0 && c.green < 3)
        c.green = 3;
    if(c.blue > 0 && c.blue < 3)
        c.blue = 3;

// (3) If dividing by 0.7 exceeds 255 reduced to 255

    if(brighter.red > 255)
        brighter.red = 255;
    if(brighter.green > 255)
        brighter.green = 255;
    if(brighter.blue > 255)
        brighter.blue = 255;
    
    return brighter;

}
struct color darker(struct color c)
{
    struct color darker;
    darker.red = c.red * 0.7;
    darker.green = c.green * 0.7;
    darker.blue = c.blue * 0.8;
    return darker;

}

