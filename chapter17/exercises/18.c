/*
 * =====================================================================================
 *
 *       Filename:  18.c
 *
 *    Description:  Modify the compare_parts function so that parts are sorted with their
 *                  numbers in descending order.
 *
 *        Version:  1.0
 *        Created:  05/08/2021 04:02:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


int compare_parts(const void *p, const void *q)
{
  return ((struct part *)q)->number - ((struct part *)p)->number;
}
