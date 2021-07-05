/* Write a program that reads a date from the command line and displays it in 
 * the following form:
 *
 * September 13, 2010
 * Allow the user to enter the date as either 9-13-2010 or 9/13/2010; you may assu-
 * me that there are no spaces in the date. Print an error message if the date
 * doesn't have one of the specified forms. Hint: Use sscanf to extract the 
 * month, day, and year from the command line argument.
 */

#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int day, month, year;
  char *months[] = {"", "January", "February", "March",
                    "April", "May", "June", "July", 
                    "August", "September", "October", "November",
                    "December" };

  if(argc != 2)
    printf("Usage: program arg1\n");
  if(sscanf(argv[1], "%d%*[-/]%d%*[-/]%d", &month, &day, &year) == 3)
    printf("%s %d, %d\n", months[month], day, year);
  else {
    printf("Please enter a date in the following form (mm/dd/yyyy) or (mm-dd-yyyy)\n");
  }
  return 0;

}
