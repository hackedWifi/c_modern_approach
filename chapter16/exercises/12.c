/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  Suppose that u is the following union:
 *                  union {
 *                    double a;
 *                    struct {
 *                      char b[4];
 *                      double c;
 *                      int d;
 *                      } e;
 *                      char f[4];
 *                  } u;
 *
 *                  If char values occupy one byte, int values occupy 4 bytes, and 
 *                  double values occupy eight bytes, how much will a C compiler 
 *                  allocate for u? (Assume that the compiler leaves no "holes" between
 *                  members.)
 *
 *
 *        Version:  1.0
 *        Created:  04/25/2021 04:25:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// A Compiler will allocate 16 bytes. The size of the longest member in a union. In this
// case struct e.

