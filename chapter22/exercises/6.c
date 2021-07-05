/* Write a call of printf that prints:
 * 1 widget
 * if widget variable (of type int) has the value 1, and 
 * n widgets
 * otherwise, where n is the value of widget. YOU are not allowed to use an if
 * statement or any other statement; the answer must be a single call of printf 
 * 
 */
#include <stdio.h>

int main(void)
{

  int widget = 1;
  printf( (widget > 1) ? "%d widgets\n" : "%d widget\n", widget);

}
