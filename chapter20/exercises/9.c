/* (a) Write the following function
 *
 * int count_ones(unsigned char ch);
 * count_ones should return the number of 1 bits in ch.
 *
 * (b) Write the function in (a) without using a loop.
 *
 */

#include <stdio.h>
int count_ones(unsigned char ch);

int main(void)
  {
    unsigned char ch ;
    printf("Enter a character: ");
    scanf("%c", &ch);
    printf("Number of 1 bits in 'ch': %d\n", count_ones(ch));

  }
/*
int count_ones(unsigned char ch)
{
  int count = 0;
  while(ch)
  { 
    if(ch & 1)
      count++;
    ch = ch >> 1;
  }
  return count;

}
*/

int count_ones(unsigned char ch)
{
  int count = 0;
  
  if(ch & 0b00000001)
    count++;
  if(ch & 0b00000010)
    count++;
  if(ch & 0b00000100)
    count++;
  if(ch & 0b00001000)
    count++;
  if(ch & 0b00010000)
    count++;
  if(ch & 0b00100000)
    count++;
  if(ch & 0b01000000)
    count++;
  if(ch & 0b10000000)
    count++;

return count;

}
