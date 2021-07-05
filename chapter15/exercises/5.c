/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Suppose that a program consists of three source files -main.c, f1.c
 *                  and f2.c- plus two header files, f1.h and f2.h. All three source
 *                  files include f1.h, but only f1.c and f2.c include f2.h. Write a
 *                  makefile for this program, assuming that the compiler is gcc and
 *                  that the executable file is to be named demo.
 *
 *        Version:  1.0
 *        Created:  04/12/2021 04:15:35 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

demo: main.o f1.o f2.o
  gcc -o main main.c f1.c f2.c

main.o: main.c f1.h 
  gcc -c main

f1.o: f1.c f1.h f2.h
  gcc -c f1.c

f2.o: f2.c f1.h f2.h
  gcc -c f2.c


