/*
 * =====================================================================================
 *
 *       Filename:  11.c
 *
 *    Description:  Suppose that s is the following structure:
 *                  struct {
 *                    double a;
 *                    union {
 *                      char b[4];
 *                      double c;
 *                      int d;
 *                      } e;
 *                    char f[4];
 *                    } s;
 *                  If char values occupy one byte, int values occupy four bytes, and 
 *                  doubles values occupy eight bytes, how much space will a C Compiler
 *                  allocate for s? (Assume that the compiler leaves no "holes" between
 *                  members.)
 *
 *        Version:  1.0
 *        Created:  04/25/2021 04:12:47 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// 12 bytes will be allocated base on the struct s. A union shares the same space as s.
// Union will be 8 bytes, ( the longest member of union e ) for a total of 20 bytes.
