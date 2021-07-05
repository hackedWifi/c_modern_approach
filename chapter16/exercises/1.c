/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  In the following declaration, the x and y structures have members 
 *                  named x and y.
 *
 *                  struct { int x, y } x;
 *                  struct { int x, y } y;
 *
 *                  Are these declarations legal on individual basis? Could both 
 *                  declarations appear as shown in a program? Justify your answer.
 *
 *        Version:  1.0
 *        Created:  04/20/2021 09:27:42 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

/* Yes, these declarations are legal. In C, each structure memeber has its own namespace */

