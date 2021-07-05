/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description: The following function calls supposedly write a single new-line, but
 *                  some are incorrect. Identify which calls don't work and explain why.
 *
 *        Version:  1.0
 *        Created:  03/02/2021 08:58:30 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

(a) printf("%c", '\n');
(b) printf("%c", "\n"); // this one is expecting a character, and a string has been provided.
(c) printf("%s", '\n'); // this one is expecting a string, and a character has been provided.
(d) printf("%s", "\n");
(e) printf('\n'); // this one is expecting a string literal not a character.
(f) printf( "\n");
(g) putchar( '\n');
(h) putchar( "\n"); // putchar takes intergers not string literals
(i) puts( '\n'); //puts expects string literals
(j) puts( "\n");
(k) puts( ""); // this one isnt writing anything. 
