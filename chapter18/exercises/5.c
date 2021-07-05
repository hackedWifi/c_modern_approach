/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  State whether each of the followings statements is true or false. 
 *                  Justify your answer.
 *
 *
 *        Version:  1.0
 *        Created:  05/18/2021 05:46:08 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (a) Every variable with static storage duration has file scope.
// False. A variable declared static outside of a function has file scope. A variable declared 
// static within a block has block scope
//
// (b) Every variable declared inside a function has no linkage.
// False. If a variable is declared extern. Its definition isn't shown. If this variable is
// defined in another file it will have external linkage.
//
// (c) Every variable with internal linkage has static storage duration.
// True. In order for a variable to have internal linkage it has to be declared as static.
// If not, it has external linkage.
// 
// (d) Every parameter has block scope
// True. function parameters have the same properties as auto variables: automatic storage
// duration, block scope, and no linkage.
