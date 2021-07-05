/* Write a program that displays the contents of a file as bytes and as charac-
 * ters. Have the user specify the file name on the command line. Here's what
 * the output will look like when the program is used to dsplay the pun.c file
 * of Section 2.1:
 *
 * Each line shows 10 bytes from the file, as hexadecimal numbers and as charac-
 * ters. The number in the Offset column indicates the position within the file
 * of the first byte on the line. Only printing characters (as determined by the
 * isprint function) are displayed; other characters are shown as periods. Note
 * that the appearance of a text file may vary, depending on the character set
 * and the operating system. The example above assumes that pun.c is a Windows
 * file, so 0D adn 0A (the ASCII carriage-return and line-feed characters) a-
 * ppear at the end of each line. Hint: Be sure to open the file in "rb" mode.
 *
 */

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define BUFF_SIZE 10

int main(int argc, char *argv[])
{
  FILE *fp;
  unsigned char buffer[BUFF_SIZE];
  int n;
  if(argc < 2)
  {
    fprintf(stderr, "Usage: program filename\n");
    exit(EXIT_FAILURE);
  }
  if((fp = fopen(argv[1], "rb")) == NULL)
  {
    printf("Cannot open %s\n", argv[1]);
    exit(EXIT_FAILURE);
  }
  
  printf("Offset,                  Bytes                  Charaters\n");
  printf("------  --------------------------------------  ---------\n");
  for(int i = 0; ; i += 10) 
  {
    n = fread(buffer, sizeof(buffer[0]), sizeof(buffer) / sizeof(buffer[0]), fp);
    if(n == 0)
      break;

    printf("%6d  ", i);

    for(int i = 0; i < n; i++)
      printf("%.2X  ", buffer[i]);
    for(int i = 0; i < n; i++)
      printf("%c" ,buffer[i]);
    printf("\n");

  }
  fclose(fp);


}
