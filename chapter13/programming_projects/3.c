/*
 * =====================================================================================
 *
 *       Filename:  3.c
 *
 *    Description:  Modify the deal.c program of Section 8.2 so that it prints the full
 *                  names of the cards in deals:
 *                  Enter number of cardas in hand: 5
 *                  Your hand:
 *                  Seven of clubs
 *                  Two of spades
 *                  Five of diamonds
 *                  Ace of spades
 *                  Two of hearts
 *                  HINT: Replace rank_code and suit_code by arrays containing pointers 
 *                  to strings.
 *
 *        Version:  1.0
 *        Created:  03/16/2021 03:26:44 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SUITS 4
#define NUM_RANKS 13

int main(void)
{
  bool in_hand[NUM_RANKS][NUM_RANKS] = {false};
  int num_cards, rank, suit;
  const char *rank_code[] = {"Two","Three","Four","Five","Six","Seven","Eight",
                            "Nine","Ten","Jack","Queen","King","Ace"};
  const char *suit_codes[] = {"clubs","diamonds","hearts","spades"};
  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);
  printf("Your hand: \n");

  while ( num_cards > 0 ) {
    suit = rand() % NUM_SUITS; //picks a random suit 
    rank = rand() % NUM_RANKS; //picks a random rank
    if(!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf(" %s of %s\n", rank_code[rank], suit_codes[suit]);
    }
  }
  printf ( "\n" );

  return 0;
}

