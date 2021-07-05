#include <stdio.h>

int main (void)
  {
  int unsigned short i = 7, j = 8, k = 9;

 // printf("%d", (i >> 1) + (j >> 1));
 // printf("%d", i & ~i);
 printf("%d", i ^ j & k);

  }
