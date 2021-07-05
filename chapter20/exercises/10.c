/* Write the following function:
 * unsigned int reverse_bits(unsigned int n);
 *
 * reverse_bits should return an unsigned integer whose bits are the same as
 * those in n but in reverse order.
 *
 *
 */

#include <stdio.h>

int reverse_bits(unsigned int n);


int main(void)
{
  unsigned int n;
  printf("Enter a hex number: ");
  scanf("%d", &n);
  printf("%X", reverse_bits(n));
}

int reverse_bits(unsigned int n)
{
  unsigned int reverse =0;

  for (int i = 0; i < 16; i++) 
  {
    if(n & (0b1 << i)) {
      reverse |= (0b1 << (16 - 1 -i));
  }

}
    return reverse;
}
