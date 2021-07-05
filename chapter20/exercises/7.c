/* Write the following functions:
 *
 * unsigned int rotate_left(unsigned int i, int n);
 * unsigned int rotate_right(unsigned int i, int n);
 *
 * rotate_left shour return the result of shifting the bits in i to the left by
 * n places, wiht the bits that were "shifted-off" move do the right end of i.
 * (for example, the call rotate_left(0x12345678, 4) should return 0x23456781 if 
 * integers are 32 bitsss long.) rotate_right is similar, but it should "rota-
 * te" to the right instead of the left.
 *
 */

#include <stdio.h>
unsigned int rotate_left(unsigned int i, int n);
unsigned int rotate_right(unsigned int i, int n);

int main(void)
{
  int num = 0x12345678;
  int n = 4;
  printf("%x", rotate_left(num, n));

}

unsigned int rotate_left(unsigned int i, int n)
{
  return (i << n) | (i >> (sizeof(int) *8 - n));

}
unsigned int rotate_right(unsigned int i, int n)
{
  return (i << (sizeof(int) *8 - n)) | (i << 8);

}

