/*
 * =====================================================================================
 *
 *       Filename:  8.c
 *
 *    Description:  Prompts from 5 quiz grades for each of five students, computes the 
 *                  total score and average score for each student, and teh average 
 *                  score, high score, low score for each quiz.
 *
 *        Version:  1.0
 *        Created:  11/04/2020 07:00:06 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>			/*  */
#include <stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
#define STUDENTS 5
#define QUIZ 5
int main ( int argc, char *argv[] )
{
  int i, j;
  float total, average, temp, max, min;
  float matrix[STUDENTS][QUIZ] = {{0}};

  for ( i = 0 ; i < STUDENTS; i++ ) {
 printf("Students %d: ", i + 1);
    for( j = 0; j < QUIZ; j++ ) {
 scanf("%f", &matrix[i][j]);
          }
}

printf("\ntotal score: "); 


for ( i = 0 ; i < STUDENTS; i++ ) {
  total = 0;
    for( j = 0; j < QUIZ; j++ ) {
      total += matrix[i][j];
          }
      printf ( "%.2f ", total );
}

printf("\ntotal students average: "); 

for ( i = 0 ; i < STUDENTS; i++ ) {
  total = 0;
    for( j = 0; j < QUIZ; j++ ) {
      total += matrix[i][j];
      average = total / STUDENTS;
          }
      printf ( "%.2f ", average);
}


for ( i = 0 ; i < QUIZ; i++ ) {

  max = min = matrix[0][i];
  total = 0;
    for( j = 0; j < QUIZ; j++ ) {
      total += matrix[j][i];
      average = total / QUIZ;
      temp = matrix[j][i];
      
      if(temp > max){
        max = matrix[j][i];
      }
      if(temp < min) {
        min = matrix[j][i];
      }

}
printf("\nAverage quiz %.2f, Max score: %.2f, Min score: %.2f", average, max, min); 
}
printf("\n");
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


