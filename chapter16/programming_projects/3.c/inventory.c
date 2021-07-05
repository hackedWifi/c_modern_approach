/*
 * =====================================================================================
 *
 *       Filename:  inventory.c
 *
 *    Description:  Maintains a parts database ( array version ) 
 *
 *        Version:  1.0
 *        Created:  04/18/2021 03:48:48 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>
#include "readline.h"

#define NAME_LEN 25      /*  max member name length */
#define MAX_PARTS 100      /*  max parts in inventory */

  struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;

};

int find_part (struct part inventory[], int part_number, int num_parts);
void insert (struct part inventory[], int *num_parts );
void search ( struct part inventory[], int num_parts );
void update ( struct part inventory[], int num_parts );
void print (struct part inventory[], int num_parts);

void quicksort ( struct part inventory[], int low, int high);
int split (struct part inventory[], int low, int high );
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  Prompts the user to enter an operation code, then calls a function to
 *                perform the requested action. Repeats until the user enters the command
 *                'q'. Prints an error message if the user enters an illegal code.
 *                
 * =====================================================================================
 */

int main ( int argc, char *argv[] )
{
 struct part inventory[MAX_PARTS];

  int num_parts = 0; /* number of parts currently stored */
  char code;

  for ( ; ; ) {
    printf ( "Enter operation code i (insert), s (search)," 
        "u (update), p (print), q (quit) " );
    scanf ( " %c", &code );

    while ( getchar() != '\n' ) /* skips to end of line */ {
      ;
    }

    switch ( code ) {
      case 'i':	
        insert(inventory, &num_parts);
        break;

      case 's':	
        search(inventory, num_parts);
        break;

      case 'u':	
        update(inventory, num_parts);
        break;

      case 'p':
        print(inventory, num_parts);
        break;

      case 'q':
        return 0;

      default:	
        printf("Illegal code\n");
        break;
    }				/* -----  end switch  ----- */
    printf("\n");
  }

}				/* ----------  end of function main  ---------- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  find_part
 *  Description:  
 * =====================================================================================
 */
int find_part ( struct part inventory[], int part_number, int num_parts )
{
  int i;

  for ( i = 0 ; i < num_parts; i++ ) {
    if ( inventory[i].number == part_number ) {
      return i;
    }
  }
  return -1;
}		/* -----  end of function find_part  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert
 *  Description:  
 * =====================================================================================
 */
void insert (struct part inventory[], int *num_parts)
{
  int part_number;

  if ( *num_parts == MAX_PARTS ) {
    printf("Database is full; can't add more parts.\n");
    return;
  }
  printf("Enter part number: ");
  scanf("%d", &part_number);

  if ( find_part(inventory,part_number, *num_parts) >= 0 ) {
    printf("Part already exists.\n");
    return;
  }
  inventory[*num_parts].number = part_number;
  printf("Enter part name: ");
  readline(inventory[*num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[*num_parts].on_hand);
  (*num_parts)++;
}		/* -----  end of function insert  ----- */

void search(struct part inventory[], int num_parts) 
{
  int i, number;
  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(inventory, number, num_parts);

  if ( i >= 0 ) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
  }
  else 
    printf("Part not found.\n");
}

void update(struct part inventory[], int num_parts) 
{
  int i, number, change;
  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(inventory, number, num_parts);

  if ( i >= 0 ) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand = change;
  }
  else
    printf("Part not found.\n");
}

void print(struct part inventory[], int num_parts)
{
  int i = 0;
  quicksort(inventory, 0, num_parts - 1);
  
  printf("Part number      Part Name                " 
      "Quantity on Hand\n");

  for ( i = 0; i < num_parts; i++ ) {
        printf("%7d          %-25s%11d\n", inventory[i].number,
        inventory[i].name, inventory[i].on_hand);
  }
  

}
void quicksort ( struct part a[], int low, int high)
{
    int middle;

    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}		/* -----  end of function quicksort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  split
 *  Description:  
 * =====================================================================================
 */
int split (struct part a[], int low, int high )
{
    struct part part_element = a[low];

    for ( ; ;  ) {
        while (low < high && part_element.number <= a[high].number) 
        {
            high--;
        }
        if(low >= high) break;
        a[low++] = a[high];


        while ( low < high && a[low].number <= part_element.number ) {
            low++;
        }
        if(low >= high) break;
        a[high--] = a[low];

    }
    a[high] = part_element;
    return high;
}
