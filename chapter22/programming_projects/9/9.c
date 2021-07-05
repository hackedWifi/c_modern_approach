/* Write a program that merges two files containing part records stored by the
 * inventory.c program (see Programming Project 8). Assume that the records in
 * each file are sorted by part number, and that we want the resulting file to 
 * be sorted as well. If both files have a part with the same number, combine
 * the quantities stored in the records. (As a consistency check, have the pro-
 * gram compare the part names and print an error message if the don't match.)
 * Have the program obtain the names of the input files and the merged file 
 * from the command line.
 *
 */

#include <stdio.h>
#include <stdlib.h>

#define NAME_LEN 25

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;

};


int main(int argc, char *argv[])
{

  FILE *part_in, *part_in2, *merged_parts;
  int p1, p2;
  struct part part1, part2;
  if(argc != 4)
    printf("Usage: merged_parts file1 file2 merged_files\n");
  
  if((part_in = fopen(argv[2], "rb")) == NULL)
  {
    printf("Cannot open %s", argv[2]);
    exit(EXIT_FAILURE);
  }

  if((part_in = fopen(argv[3], "rb")) == NULL)
  {
    printf("Cannot open %s", argv[3]);
    exit(EXIT_FAILURE);
  }

  if((merged_parts = fopen(argv[4], "rb")) == NULL)
  {
    printf("Cannot open %s", argv[4]);
    exit(EXIT_FAILURE);
  }


  p1 = fread(&part1, sizeof(struct part), 1, part_in); 
  p2 = fread(&part2, sizeof(struct part), 1, part_in2); 

  fclose(part_in); 
  fclose(part_in2); 
  fclose(merged_parts); 

}


