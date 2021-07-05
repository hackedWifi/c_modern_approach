/* Suppose that we cal scanf as follows:
 *
 * n = scanf("%d%f%d", &i, &x, &j);
 * (i, j, and n are int variables and x is a float variable.) Assuming that the 
 * input stream contains the characters shown, five the values of i, j, n, and
 * x after the call. In addition, indicate which characters were consumed by 
 * the call.
 *
 * (a) 10 20 30©
 * (b) 1.0 2.0 3.0©
 * (c) 0.1 0.2 0.3©
 * (d) .1 .2 .3©
 *
 */

#include <stdio.h>

int main(void)
  {
int i = 0, j = 0, n = 0; 
float x = 0.0f;

 n = scanf("%d%f%d", &i, &x, &j);

 printf("i is: %d\nx is: %f\nj is: %d\n", i, x, j);
 printf("The value of n is: %d\n", n);

 //(a) 10 20.00000 30
 //(b) 1 0.00000 2
 //(c) 0 0.10000 0
 //(d) 0 1.00000 0

    }
