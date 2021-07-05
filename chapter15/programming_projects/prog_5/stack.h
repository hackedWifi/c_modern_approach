/*
 * =====================================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/15/2021 02:57:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdbool.h>
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int);
int stack_overflow(void);
int stack_underflow(void);
char pop(void);

