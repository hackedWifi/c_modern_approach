/* (a) Assume that the variable n has been declared as follows:
 * struct {
 *  int flag: 1;
 *  } s;
 *
 *  With some compilers, executing the following statement causes 1 to be dis-
 *  played, but with other compilers, the output is -1. Explain this behavior.
 *
 * (b) How can this problem be avoided?  
 *
 */

#include <stdio.h>

struct {
  unsigned int flag: 1;
} s;

int main(void)
{

  s.flag = 1;
  printf("%d\n", s.flag);

}
// (a) Becuase the int declaration is ambiguous. The compiler could treat the int
// as signed or unsigned. 
//
// (b) declaring the int flag as unsigned int
