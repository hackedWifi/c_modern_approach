/* Assume that str is a string that contains a "sales rank" immediately 
 * preceded by the # symbol (other characters may precede the # symbol
 * and/or follow the sales rank). A sale rank is a series of decimal digits po-
 * ssibly containing commas, such as the following example:
 *
 * 989
 * 24,675
 * 1,162,620
 *
 * Write a call of sscanf that extracts the sales rank (but not the # symbol)
 * and stores i in a string variable named sales_tax.
 *
 */

#include <stdio.h>

int main(void)
{
  char str1[50] = "/#1,162,6220";
  char str[50];
  sscanf(str1,"%*[/!@#$%^&*()?/]%[1234567890,]", str);
  puts(str);

}
