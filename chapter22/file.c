#include <stdio.h>
#include <stdlib.h>

#define FILE_NAME "open_file.txt"

int main(void)
{
  FILE *fp;
  fp = fopen(FILE_NAME, "r");
  if(fp == NULL)
  {
    printf("Can't open %s\n", FILE_NAME);
    exit(EXIT_FAILURE);
  }
  fclose(fp);
  return 0;
}

