/*
 * =====================================================================================
 *
 *       Filename:  line.h
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/13/2021 02:18:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef LINE_H
#define LINE_H

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  clear_line
 *  Description:  Clears the current line.
 * =====================================================================================
 */
void clear_line ( void );

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  add_word
 *  Description:  Adds word to the end of the current line. If this is not the first word
 *                on the line, puts ne space before word.
 * =====================================================================================
 */
void add_word ( const char *word );

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  space_remaining
 *  Description:  Returns the number of characters left int the current line.
 * =====================================================================================
 */
int space_remaining ( void );

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  write_line
 *  Description:  Writes the current line with justification. 
 * =====================================================================================
 */
void write_line ( void );

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  flush_line
 *  Description:  Writes the current line without justification. If the line is empty,
 *                does nothing.
 * =====================================================================================
 */
void flush_line ( void );

#endif     /* -----  not IFNDEF  ----- */
