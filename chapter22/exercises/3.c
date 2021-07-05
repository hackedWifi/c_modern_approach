/* Find the error in the following program fragment and show how to fix it.
 *
 * FILE *fp;
 *
 * if(fp = fopen(filename, "r");
 * {
 *  read characters until end-of-file
 * }
 * fclose(fp);
 *
 */

// The if statement is missing a parentheses at the beginning of fp,
// that generates an warning "Using the result of an assignment as
// condition without parentheses. 
// 
#include <stdio.h>

int main(int argc, char *argv[])
{

  FILE *fp;
  if((fp = fopen("1.txt", "r"))) 
      {
        printf("here");
      }
  else {
    printf("Cannot open file");
    return -1;
  }
  fclose(fp);
    return 0;
}
