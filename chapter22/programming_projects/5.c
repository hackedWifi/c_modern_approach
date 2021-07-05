/* The xor.c program of Section 20.1 refuses to encrypt bytes that—in original
 * or encrypted form—are control characters. We can now remove this restriction.
 * Modify the program so that the names of the input and output files are co-
 * mmand line arguments. Open both files in binary mode, and remove the test 
 * that checks whether the original and encrypted characters are printing cha-
 * racters.
 */
#include <stdio.h>
#include <stdlib.h>

#define KEY '&'

int main(int argc, char *argv[])
{
  int orig_char, new_char;
  FILE *fp, *out;
  if(argc < 2)
  {
    printf("Usage: xor input.file output.file\n");
    exit(EXIT_FAILURE);
  }

  if((fp = fopen(argv[1], "rb")) == NULL)
  {
    printf("Cannot open %s \n", argv[1]);
    exit(EXIT_FAILURE);
  }

  if((out = fopen(argv[2], "wb"))== NULL)
  {
    printf("Cannot open %s \n", argv[2]);
    fclose(fp);
    exit(EXIT_FAILURE);
  }


  while((orig_char = fgetc(fp)) != EOF)
  {
    orig_char ^= KEY;
    putc(orig_char, out);
  }
  fclose(fp);
  fclose(out);
  return 0;

}
