/* Write a program that reads integers from a text file whose name is given as
 * a command line argument. Each line of the file may contain any number of in-
 * tegers (incluiding none) separated by one or more spaces. Have the program
 * display the largest number in the file, the smallest number, and the median
 * (the number closest to the middle if the integers were sorted). If the file
 * contains an even number of integers, there will be two numbers in the middle;
 * the program should display their average (rounded down). You may assume that
 * the file contains no more than 10,000 integers. Hint: Store the integers in
 * array and the sort the array.
 *
 */
#include <stdio.h>
#include <stdlib.h>

#define MAX_INT 10000 

int compare(const void *p, const void *q);

int main(int argc, char *argv[])
{
  FILE *fp;
  int i = 0, median = 0; 
  int nums[MAX_INT];
  if(argc != 2)
  {
    fprintf(stderr, "Usage: program inputFile\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "Cannot open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  
  while(!ferror(fp) && i < MAX_INT - 1)
  {
  if(fscanf(fp, " %d", &nums[i++]) == EOF)
    break;
  }
  i--;
  qsort(nums, i, sizeof(int), compare);
  if(i % 2 == 0){
    median = ( (nums[(i -1) / 2]) + (nums[(i -1)/ 2]));
  }
  else {
    median = (nums[(i - 1) / 2])  ;
  }

  printf("Smallest number: %d\n", nums[0]);
  printf("Largest number: %d\n", nums[i - 1]);
  printf("Median number: %d\n", median);

  fclose(fp);
  return 0;
}

int compare(const void *p, const void *q)
{
  return *((int*)p) - *((int*)q);
}
