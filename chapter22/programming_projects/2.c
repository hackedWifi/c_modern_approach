/* Write a program that converts all letters in a file to uppercase. (Characters
 * other that letters shouldn't be changed.) The program should obtain the file
 * name from the command line and write the output to sdtout.
 *
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(int argc, char *argv[])
{
  FILE *fp; 
  int ch;
  if(argc != 2)
  {
    fprintf(stderr, "You need to input a file name\n");
    exit(EXIT_FAILURE);
  }
  if((fp = fopen(argv[1], "r")) == NULL)
  {
    fprintf(stderr, "Cannot open\n");
    exit(EXIT_FAILURE);
  }
  while((ch = fgetc(fp)) != EOF)
    putchar(toupper(ch));

  fclose(fp);
  return 0;

}
