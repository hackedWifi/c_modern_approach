/*
 * =====================================================================================
 *
 *       Filename:  deal.c
 *
 *    Description:  Deals a random hand of cards. 
 *
 *        Version:  1.0
 *        Created:  10/19/2020 07:28:04 PM
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
  const char rank_code[] = {'2','3','4','5','6','7','8',
                            '9','t','j','q','k','a'};
  const char suit_codes[] = {'c','d','h','s'};
  srand((unsigned) time(NULL));

  printf("Enter number of cards in hand: ");
  scanf("%d", &num_cards);
  printf("Your hand: ");

  while ( num_cards > 0 ) {
    suit = rand() % NUM_SUITS; //picks a random suit 
    rank = rand() % NUM_RANKS; //picks a random rank
    if(!in_hand[suit][rank]) {
      in_hand[suit][rank] = true;
      num_cards--;
      printf(" %c%c", rank_code[rank], suit_codes[suit]);
    }
  }
  printf ( "\n" );

  return 0;
}

