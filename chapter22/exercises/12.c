/* Find the error in the following funtcion and show how to fix it.
 *
 * int count_periods(const char *filename)
 * {
 * FILE *fp;
 * int n = 0;
 *
 * if((fp = fopen(filename, "r")) != NULL)
 * {
 *  while(fgetc(fp) != EOF)
 *    if(fgetc(fp) == '.')
 *     n++;
 *    fclose(fp);
 *    }
 *  return n;
 *  }
 *
 */

// We need to declare an int ch variable to store each character read by 
// fgetc(fp)

#include <stdio.h>
#include <stdlib.h>
int count_periods(const char *filename);
int main(int argc, char *argv[])
{
  printf("%d total periods (.) in %s: \n", count_periods(argv[1]), argv[1]);

}

int count_periods(const char *filename)

{
  FILE *fp;
  int n = 0;
  int ch;

  if((fp = fopen(filename, "r"))  != NULL)
  {
  while((ch = fgetc(fp))  != EOF)
//    if(fgetc(fp) == EOF)
//    {
//      fprintf(stderr, "error while reading file\n");
//      exit(EXIT_FAILURE);
//    }
    if(ch == '.')
      n++;
  }

  fclose(fp);
  return n;
}

