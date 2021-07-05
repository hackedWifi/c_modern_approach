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


Item peek(Stack s);
void make_empty(void);
bool is_empty(void);
bool is_full(void);
void push(int i);
Item pop(void);
#endif   /* ----- #ifndef stack_INC  ----- */
