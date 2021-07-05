/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  The following function, which computes the area of a triangle, 
 *                  contains tow errors. Locate the errors and show how to fix them.
 *
 *        Version:  1.0
 *        Created:  11/26/2020 04:16:20 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

/*double triangle_area(double base, height) */
  /*double product;*/
/*{*/
  /*product = base * height;*/
  /*return product / 2;*/
/*}*/

/*  
 *  The above function is missing the type for the height parameter. 
 *  Also the declaration of the product variable is outside its body.
 *
 *
 */

double triangle_area(double base, double height) 
{
  double product;
  product = base * height;
  return product / 2;
}
