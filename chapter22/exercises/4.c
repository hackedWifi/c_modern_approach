/* Show how each of the following numbers will look if displayed by printf with
 * %#012.5g as the conversion specification:
 *
 * (a) 83.7361
 * (b) 29748.6607
 * (c) 1054932234.0
 * (d) 0.000235218
 *
 */

#include <stdio.h>

int main(void)
{
  // a) double n = 83.7361;
  // b)double n = 29748.6607;
  // c) double n = 1054932234.0;
  double n = 0.000235218;
  printf("%#012.5g\n", n);

}

