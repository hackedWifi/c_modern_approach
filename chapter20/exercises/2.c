/**
 * Describe a simple way to toggle a bit (changed it from 0 to 1 or viceversa)
 * Illustrate the technique by writing a statement that toggles bit 4 of the 
 * variable i.
 *
 **/
#include <stdio.h>
int main(void)
{
  unsigned short i = 232;
  printf("%d", i ^= 1 << 4);

}
