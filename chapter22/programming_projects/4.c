/* (a) Write a program that counts the number of characters in a text file.
 *
 * (b) Write a program that counts the number of words in a text file. A word
 * is any sequence of non-white-space characters.
 *
 * (c) Write a program that counts the number of lines in a text file.
 *
 * Have each program obtain the file name from the command line.
 *
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  if(argc < 2)
  {
    printf("Usage: count filename\n");
    exit(EXIT_FAILURE);
  }
  int ch, num_chars = 0, num_lines  = 0, num_words = 0;

  if((fp = fopen(argv[1], "r")) == NULL)
      {
      printf("Cannot open %s ", argv[1]);
      exit(EXIT_FAILURE);
      }

  while((ch = fgetc(fp)) != EOF)
  {
    if(ch == '\n')
    {
      num_lines++;
      num_chars--;
    }
    if(ch == ' ' || ch == '\n')
      num_words++;
    num_chars++;
  }
  
  printf("%d Number of characters in %s \n", num_chars, argv[1]);
  printf("%d Number of words in %s \n", num_words, argv[1]);
  printf("%d Number of lines in %s \n", num_lines, argv[1]);
  fclose(fp);
  return 0;

}
