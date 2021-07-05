/*
 * =====================================================================================
 *
 *       Filename:  13.c
 *
 *    Description:  Suppose that s is the following structure (point is a structure tag
 *                  declared in Exercise 10):
 *
 *                  struct shape {
 *                    int shape_kind; // RECTANGLE or CIRCLE 
 *                    struct point center; // coordinate of center
 *                    union {
 *                      struct {
 *                        int height, width;
 *                        } rectangle;
 *                        struct {
 *                          int radius;
 *                          } circle;
 *                    } u;
 *                  } s;
 *                  if the value of shape_kind is RECTANGLE, the height and width members
 *                  store the dimensions of a rectangle. If the value of shape_kind is
 *                  CIRCLE, the radius member stores the radius of a circle. Indicate 
 *                  which of the following statements are legal, and show how to repair
 *                  the ones that aren't.
 *                 (a) s.shape_kind = RECTANGLE;
 *                 (b) s.center.x = 10;
 *                 (c) s.height = 25;
 *                 (d) s.u.rectangle.width = 8;
 *                 (e) s.u.circle = 5;
 *                 (f) s.u.radius = 5;
 *
 *
 *        Version:  1.0
 *        Created:  04/25/2021 04:31:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (c) Should be  s.u.rectangle.height = 25;
// (e) Shoud be s.u.circle.radius = 5;
// (f) Shoud be s.u.circle.radius = 5;
