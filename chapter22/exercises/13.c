/* Write the following function:
 *
 * int line_length(const char *filename, int n)
 *
 * The function should return the length of line n in the text file whose name 
 * is filename (assuming that the first line in the file is line 1). If the 
 * line doesn't exist, the function should return 0.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int line_length(const char *filename, int n);

int main(int argc, char *argv[])
{
  printf("Current line is of length: %d",line_length(argv[1], 5));


}

int line_length(const char *filename, int n)
{
  FILE *fp;
  int len = 0, ch = 0, pos = 1;

  if((fp = fopen(filename, "rb")) == NULL)
  {
    fprintf(stderr, "cannot open %s file", filename);
    exit(EXIT_FAILURE);
  }
    

  while((ch = fgetc(fp)) != EOF)
  {
    if(pos == n && ch != '\n' )
      len++;
    if(ch == '\n')
      pos++;
  }
  if(n > pos)
    return 0;

 
  return len;
}
