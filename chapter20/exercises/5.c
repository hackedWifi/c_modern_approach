/* Write macros named GET_RED, GET_GREEN, GET_BLUE that, when given a color as
 * an argument (See Exercise 4), return its 8-bit red, green, and blue intensi-
 * ties.
 *
 */
#include <stdio.h>
#define MK_COLOR(r,g,b) ((long) 0x00 | (r) | (g) << 8 | (b) << 16);
#define GET_RED(x) ((x) & 0xff) 
#define GET_GREEN(x) ((x)>> 8 & 0xff) 
#define GET_BLUE(x) ((x) >> 16 & 0xff) 

int main(void)
{
  long color = MK_COLOR(210,200,255);
  printf("%ld", GET_BLUE(color));

}


