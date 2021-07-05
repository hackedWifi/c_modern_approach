/* Write a program named fcat that "concatenates" any number of files by writing
 * them to standard output, one after the other, with no break between files. 
 * For example, the following command will display files f1.c, f2.c, and f3.c on
 * the screen:
 *
 * fcat f1.c f2.c f3.c
 *
 * fcat should issue and error message if any file can't be opened. Hint: Since
 * is has no more that one file open at a time, fcat needs only a single file 
 * pointer variable. Once it's finished with a file, fcan can use the same varia-
 * ble when it opens next file.
 *
 */
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  FILE *fp;
  int ch;
  if(argc < 2)
  {
    fprintf(stderr, "Usage: fcat filenames\n");
    exit(EXIT_FAILURE);
}
  for(int i = 1; i < argc; i++)
  {
  if((fp = fopen(argv[i], "r")) == NULL)
  {
    printf("Cannot open %s\n", argv[i]);
    exit(EXIT_FAILURE);
  }
  while((ch = fgetc(fp)) != EOF)
    putc(ch, stdout);
  }
fclose(fp);
return 0;

}
