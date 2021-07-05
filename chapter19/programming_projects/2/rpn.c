#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include "stack.h"
int main (void )
{
  int o1, o2;
  Stack s = create();
  
  while(true){
  char c ; 
  printf ( "Enter an RPN expression: " );
    while((c = getchar()) != '\n')
    {
    if(isdigit(c))
      push(s, c - '0');
    else { 
      switch (c) {
        case '+':	
          o1 = pop(s);
          o2 = pop(s);
          push(s, o2 + o1) ;

          break;
        case '-':	
          o1 = pop(s);
          o2 = pop(s);
          push(s, o2 - o1);
          break;

        case '*':	
          o1 = pop(s);
          o2 = pop(s);
          push(s, o2 * o1);
          break;

        case '/':
          o1 = pop(s);
          o2 = pop(s);
          push(s, o2 / o1);;
          break;
        case '=':
          printf("Value of the stack is: %d\n" , pop(s));
          break;
        case ' ':
          break;
        default:	
          return EXIT_SUCCESS;
      }				/* -----  end switch  ----- */
    }
  }
  }
  return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
