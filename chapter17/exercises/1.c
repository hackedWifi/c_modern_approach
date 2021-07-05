/*
 * =====================================================================================
 *
 *       Filename:  1.c
 *
 *    Description:  Having to check the return value of a malloc (or any other memory a-
 *                  llocation function) each time we call it can be an annoyance. Write
 *                  a function named my_malloc that serves as a "wrapper" for malloc. 
 *                  When we call my_malloc and ask it to allocate n bytes, it in turn
 *                  calls malloc, tests to make sure that malloc doesn't return a null
 *                  pointer, and then returns the pointer from malloc. Have my_malloc
 *                  print an error message and terminate the program if malloc returns a
 *                  null pointer.
 *
 *        Version:  1.0
 *        Created:  05/03/2021 03:29:32 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
  
#include <stdio.h>
#include <stdlib.h>
void *my_malloc(size_t n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
void *my_malloc(size_t n)
{
    void *p;
    p = malloc(sizeof(n)); 
    if(p == NULL)
    {
        printf("Allocation failed");
        exit(EXIT_FAILURE);
        
    }

    return p;

}
