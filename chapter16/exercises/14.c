/*
 * =====================================================================================
 *
 *       Filename:  14.c
 *
 *    Description:  Let shape be the structure tag declared in Exerxise 13. Write
 *                  functions that perform the following operations on a shape structure
 *                  s passed as an argument:
 *                  (a) Compute the are of s.
 *
 *                  (b) Move s by x units in the x direction and y untis in the y 
 *                  direction, returning the modified version of s. (x adn y are additio-
 *                  nal arguments to the function.)
 *
 *                  (c) Scale s by a factor of c (a double value), returning the modified
 *                  version of s. (c is an additional argument to the function.)
 *
 *
 *        Version:  1.0
 *        Created:  04/25/2021 05:01:24 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 *=====================================================================================
 */
#include <stdio.h>
#define RECTANGLE 1      /*  */
#define CIRCLE 0      /*  */
#define PI 3.1416      /*  */
struct point { int x, y; };

struct shape {
  int shape_kind; // RECTANGLE or CIRCLE 
  struct point center; // coordinate of center
  union {
    struct {
      int height, width;
    } rectangle;
    struct {
      int radius;
    } circle;
  } u;
} s;


double shape_area(struct shape s);
struct shape move_shape(struct shape s, int x, int y);
struct shape scale_shape(struct shape s, double c);
int main(void)
{
  s.shape_kind = RECTANGLE;
  s.u.rectangle.width = 10;
  s.u.rectangle.height = 15;
  s.u.circle.radius = 5;

  printf("Area of a shape is: %f", shape_area(s));
}

double shape_area(struct shape s)
{
  if(s.shape_kind == RECTANGLE)
    return s.u.rectangle.height * s.u.rectangle.width;
  else
    return PI * (s.u.circle.radius * s.u.circle.radius);
}

struct shape move_shape(struct shape r, int x, int y)
{
  r.center.x += x;
  r.center.y += y;
  return r;
}

struct shape scale_shape(struct shape s, double c)
{
  if(s.shape_kind == RECTANGLE)
  {
    s.u.rectangle.width *= c;
    s.u.rectangle.height *= c;
  }
  else
    s.u.circle.radius *= c;
  return s;

}
