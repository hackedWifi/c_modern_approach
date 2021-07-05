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

int find_part ( int number);
void insert ( void );
void search ( void );
void update ( void );
void print (void);

int compare(const void *p, const void *q);

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;

} inventory[MAX_PARTS];

int num_parts = 0; /* number of parts currently stored */
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
        insert();
        break;

      case 's':	
        search();
        break;

      case 'u':	
        update();
        break;

      case 'p':
        print();
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
int find_part ( int number )
{
  int i;

  for ( i = 0 ; i < num_parts; i++ ) {
    if ( inventory[i].number == number ) {
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
void insert ( void )
{
  int part_number;

  if ( num_parts == MAX_PARTS ) {
    printf("Database is full; can't add more parts.\n");
    return;
  }
  printf("Enter part number: ");
  scanf("%d", &part_number);

  if ( find_part(part_number) >= 0 ) {
    printf("Part already exists.\n");
    return;
  }

  inventory[num_parts].number = part_number;
  printf("Enter part name: ");
  readline(inventory[num_parts].name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &inventory[num_parts].on_hand);
  num_parts++;
}		/* -----  end of function insert  ----- */

void search() 
{
  int i, number;
  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);

  if ( i >= 0 ) {
    printf("Part name: %s\n", inventory[i].name);
    printf("Quantity on hand: %d\n", inventory[i].on_hand);
  }
  else 
    printf("Part not found.\n");
}

void update() 
{
  int i, number, change;
  printf("Enter part number: ");
  scanf("%d", &number);
  i = find_part(number);

  if ( i >= 0 ) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    inventory[i].on_hand = change;
  }
  else
    printf("Part not found.\n");
}

void print(void)
{
  int i;
  printf("Part number      Part Name                " 
      "Quantity on Hand\n");
  qsort(inventory, num_parts, sizeof(struct part), compare);
  for ( i = 0; i < num_parts; i++ ) {
    printf("%7d          %-25s%11d\n", inventory[i].number,
        inventory[i].name, inventory[i].on_hand);
  }
  

}

int compare(const void *p, const void *q)
{
  return ((struct part *)p)->number - ((struct part *)q)->number;

}
