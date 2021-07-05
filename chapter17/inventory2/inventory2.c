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

struct part {
  int number;
  char name[NAME_LEN+1];
  int on_hand;
  struct part *next;

};

struct part *inventory = NULL; /* point to first part */

struct part *find_part ( int number);
void insert ( void );
void search ( void );
void update ( void );
void print (void);

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
struct part *find_part ( int number )
{
  struct part *p ;
  for (p = inventory; p != NULL && number > p->number;
      p = p->next) {
    ;
    }
  if(p != NULL && number == p->number)
    return p;
  return NULL;
}		/* -----  end of function find_part  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  insert
 *  Description:  
 * =====================================================================================
 */
void insert ( void )
{
  struct part *cur, *prev, *new_node;
  new_node = malloc(sizeof(struct part));

  if ( new_node == NULL ) {
    printf("Database is full; can't add more parts.\n");
    return;
  }
  printf("Enter part number: ");
  scanf("%d", &new_node->number);

  for ( cur = inventory, prev = NULL; 
      cur != NULL && new_node->number > cur->number;
      prev = cur, cur = cur->next ) {
    ;
  }
  if (cur != NULL && new_node->number == cur->number) {
    printf("Part already exists.\n");
    free(new_node);
    return;
  }

  printf("Enter part name: ");
  readline(new_node->name, NAME_LEN);
  printf("Enter quantity on hand: ");
  scanf("%d", &new_node->on_hand);

  new_node->next = cur;
  if(prev == NULL)
    inventory = new_node;
  else 
    prev->next = new_node;
}		/* -----  end of function insert  ----- */

void search() 
{
  int number;
  struct part *p;

  printf("Enter part number: ");
  scanf("%d", &number);
  p = find_part(number);

  if ( p != NULL ) {
    printf("Part %s\n", p->name);
    printf("Quantity on hand: %d\n", p->on_hand);
  }
  else 
    printf("Part not found.\n");
}

void update() 
{
  int number, change;
  struct part *p;
  printf("Enter part number: ");
  scanf("%d", &number);
  p = find_part(number);

  if ( p != NULL) {
    printf("Enter change in quantity on hand: ");
    scanf("%d", &change);
    p->on_hand += change;
  }
  else
    printf("Part not found.\n");
}

void print(void)
{
  struct part *p;
  printf("Part number      Part Name                " 
      "Quantity on Hand\n");

  for ( p = inventory; p != NULL; p = p->next ) {
    printf("%7d          %-25s%11d\n", p->number,
        p->name, p->on_hand);
  }
  

}

