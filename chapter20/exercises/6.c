/*  Use the bitwise operators to write the following function:
 *  unsigned short swap_bytes(unsigned short i)
 *  The swap_bytes should return the number that results form swapping the two
 *  bytes in i. (Short integers occupy two bytes on most computers.) For exam-
 *  ple, if i has the value 0x1234 (0001 0010 0011 0100 in binary), the swap_bytes
 *  shoul return 0x3412 (0011 0100 0001 0010). Test your function by writing a
 *  program that reads a number in hexadecimal, then writes the number with its
 *  bytes swapped.
 *
 *  Enter a hexadecimal number (up to four digits): 1234
 *  Number with bytes swapped: 3412
 *
 *  Hint: Use the %hx conversion to read and write the hex numbers.
 *
 *  (b) condense the swap_bytes function so that its body is a single statement.
 */
#include <stdio.h>

unsigned short swap_bytes(unsigned short i);

int main(void)
{
  unsigned short hex;
  printf("Enter a hexadecimal number (up to four digits): 0x");
  scanf("%hx", &hex);
  printf("Number with bytes swappped: 0x%hx\n", swap_bytes(hex));



}
unsigned short swap_bytes(unsigned short i)
{

  unsigned short high_byte = i << 8;
  unsigned short low_byte = i >> 8;
  return high_byte | low_byte;

}

//(b)
/*
unsigned short swap_bytes(unsigned short i)
{

  return (i << 8) | (i >>8);

}

*/
