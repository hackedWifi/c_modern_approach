/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  The following questions refer to the program described in Exercise 5.
 *                 (a) Which files need to be compiled when the program is built for the 
 *                 first time?
 *                 (b) If f1.c is changed after the program has been built, which files
 *                 need to be recompiled?
 *                 (c) If f1.h is changed after the program has been built, which files
 *                 need to be recompiled?
  *                (d) If f2.h is changed after the program has been built, which files
 *                 need to be recompiled? 
 *
 *        Version:  1.0
 *        Created:  04/12/2021 04:18:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

(a) 
  main.c f1.c f2.c

(b)
  f1.c 

(c)
  f1.c f2.c main.c

(d)
  f1.c and f2.c


