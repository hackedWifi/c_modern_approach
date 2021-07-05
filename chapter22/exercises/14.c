/* (a) Write your own version of the fgets function. Make it behave as much like
 * the real fgets function as possible; in particular, make sure that it has the 
 * proper return value. To avoid conflicts with the standard library, don't name
 * your function fgets.
 *
 * (b) Write your own version of fputs, following the same rules as in part (a).
 *
 *
 */

#include <stdio.h>

char *ffgets(char *restrict s, int n, FILE *restrict stream);
int ffputs(const char *s, FILE *stream);

int main(void)
{
  FILE *fp = fopen("test.txt", "r");
  FILE *out = fopen("write.txt", "w+");
  char str[100];
  if(fp == NULL)
    fprintf(stderr, "Cannot open file");
  if(out == NULL)
    fprintf(stderr, "Cannot open file");

  ffputs("hello", out);
}
char *ffgets(char *restrict s, int n, FILE *restrict stream)
{
  int ch;
  int i = 0;
  while((ch = getc(stream)) != EOF && i < n - 1)
  {
    s[i++] = ch;

  }

  if(n == 0 || ferror(stream))
    return NULL;


  s[i] = '\0';
  return s;

}

int ffputs(const char *s, FILE *stream)
{
  while(*s != '\0')
  {
    if((putc(*s, stream)) == EOF)
      return EOF;
  s++;
  }
  return 0;
}

