/* Write a program that reads a series of phone numbers from a file and displays
 * them in a standard format. Each line of the file will contain a single phone
 * number, but the numbers may be in a variety of formats. You may assume that 
 * each line contains 10 digits, possibly mixed with other characters (which 
 * should be ignored). For example, suppose that the file contains the following
 * lines:
 *
 * 404.817.6900
 * (215) 686-1776
 * 312-746-6000
 * 877 275 5273
 * 6173434200
 *
 * The output of the program shoud have the following appearance:
 * (404) 817 6900
 * (215) 686 1776
 * (312) 746 6000
 * (877) 275 5273
 * (617) 343 4200
 *
 * Have the program obtain the file name from the command line.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int n, f, s, t;
  if(argc != 2)
  {
    fprintf(stderr, "Usage: program file\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "Cannot open %s", argv[1]);
    exit(EXIT_FAILURE);
  }

  while(( n = fscanf(fp, "%*c%3d%*c%3d%*c%4d", &f, &s, &t)) > 0)
  {
    printf("(%d) %d %d\n", f, s, t);
  }

  fclose(fp);
  return 0;

}
