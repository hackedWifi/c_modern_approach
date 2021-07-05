/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Suppose that f and p are declared as follows:
 *                  
 *                  struct {
 *                    union {
 *                      char a, b;
 *                      int c;
 *                      } d;
 *                    int e[5];
 *                  } f, *p = &f;
 *
 *                  Which of the following statements are legal?
 *                  (a) p->b = ' ';
 *                  (b) p->e[3] = 10;
 *                  (c) (*p).d.a = '*';
 *                  (d) p->d->c = 20;
 *
 *
 *        Version:  1.0
 *        Created:  05/04/2021 10:35:29 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */


// b and c are legal
// a is illegal because a is not accessing the d union member
// d is illegal because p is accessing the d struct pointer member but failing to access the union
// member.
