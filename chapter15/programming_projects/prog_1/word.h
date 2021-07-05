/*
 * =====================================================================================
 *
 *       Filename:  word.h
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/13/2021 02:14:26 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#ifndef WORD_H
#define WORD_H 


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  read_word
 *  Description:  reads the next word from the input and stores it in word. Makes word
 *                empty if no word could be read because of the end-of-file. Truncates
 *                the word if its length exceeds len. Returns the numbeer of characters
 *                stored.
 * =====================================================================================
 */
int read_word ( char *word, int len );


#endif
