/* Define a union that makes it possible to view a 32-bit value as either a 
 * float or the structure described in Exercise 14. Write a rpogram that stores
 * 1 in the structure's sign filed, 128 in the exponent field and 0 in the
 * fraction fiel, then prints the float value stored in the union. (The answer
 * should be -2.0 if you've set up the bit-fields correctly).
 */
#include <stdio.h>
  
union {
  float i;
  struct {
    unsigned int frac: 23, exp: 8,  sign: 1;
  } field;

} f;



int main(void)
{
  f.field.frac= 0;
  f.field.exp = 128;
  f.field.sign = 1;
  printf("%.2f", f.i);

}
