/* Let f be the following function:
 *
 * unsigned int f(unsigned int i, int m, int n)
 * {
 *  return (i>> (m + 1 - n)) & ~(~0 << n)
 *  }
 *
 *
 */


#include <stdio.h>
unsigned int f(unsigned int i, int m, int n);
int main(void)
{
  int num = 0x12345678;
  int m = 2;
  int n = 4;
  printf("%x", f(num, m, n));

}

unsigned int f(unsigned int i, int m, int n)
{
  return (i>> (m + 1 - n)) & ~(~0 << n);

}

