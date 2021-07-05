/*
 * =====================================================================================
 *
 *       Filename:  stack.h
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  05/20/2021 09:26:00 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef  stack_INC
#define  stack_INC
#include <stdbool.h>
typedef struct stack_type *Stack;
typedef int Item;

Stack create(void);
void make_empty(Stack s);
bool is_empty(Stack s);
bool is_full(Stack s);
void push(Stack s, Item i);
Item pop(Stack s);
#endif   /* ----- #ifndef stack_INC  ----- */
