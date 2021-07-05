/*
 * =====================================================================================
 *
 *       Filename:  readline.h
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  04/18/2021 04:07:40 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef READLINE_H
#define READLINE_H

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  readline.c
 *  Description:  Skips leading white-space characters, then reads the remainder of the 
 *                input line and stores it in str. Truncates the line if its length
 *                exceeds n. Returns the number of characters stored.
 * =====================================================================================
 */

int readline(char str[], int n );

#endif     /* -----  not IFNDEF  ----- */

