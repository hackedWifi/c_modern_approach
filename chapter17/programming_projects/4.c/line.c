/*
 * =====================================================================================
 *
 *       Filename:  line.c
 *
 *    Description:   
 *
 *        Version:  1.0
 *        Created:  04/13/2021 02:49:31 PM
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
#include <string.h>
#include <stdlib.h>
#include "line.h"
#define MAX_LINE_LEN 60      /*  */
#define MAX_WORD_LEN 20
struct node {
  char word[MAX_WORD_LEN];
  struct node *next;
};

/*char line[MAX_LINE_LEN+1];*/
struct node *line = NULL;
int line_len = 0;
int num_words = 0;

bool alt_spaces = false;

void clear_line(void)
{
  struct node *temp;
  while(line != NULL)
  {
    temp = line;
    line = line->next;
    free(temp);
  }
  line_len = 0;
  num_words = 0;
} 

void add_word(const char *word)
{
  struct node *new_word = malloc(sizeof(struct node) + strlen(word) + 1);
  struct node **p = &line;

  if(new_word == NULL)
    {
    printf("Error: malloc failed in add_word\n");
    exit(EXIT_FAILURE);
    }
  strcpy(new_word->word, word);
  new_word->next = NULL;

  while(*p){
    p = &(*p)->next;
  }

  *p = new_word;
  line_len += strlen(word);

  if (num_words > 0)
  {
    line_len++;
  }
  num_words++;

}

int space_remaining(void)
{
  return MAX_LINE_LEN - line_len;
}

void write_line(void)
{
  struct node *p;
  int extra_spaces, spaces_to_insert, j;
  extra_spaces = MAX_LINE_LEN - line_len;
  alt_spaces = true;

  for ( p = line; p != NULL; p = p->next ) {

      printf("%s",p->word);
      if(p->next == NULL) break;
      spaces_to_insert = extra_spaces / (num_words - 1);

      /*if(alt_spaces && extra_spaces > 0){*/
        /*spaces_to_insert++;*/
        /*alt_spaces = true;*/
      /*}*/

      for ( j = 1; j <= spaces_to_insert + 1; j++ ) {
            putchar(' ');
      }
      extra_spaces -= spaces_to_insert;
      num_words--;
    }
  putchar('\n');
}

void flush_line(void)
{
  struct node *words = line;
  int i;
  if(line_len > 0)
  {
    for(i = 0; words != NULL; i++, words = words->next)
    {
      if(i > 0 && words->next != NULL)
      {
      putchar(' ');
      }
printf("%s",words->word);
    }
  }
}
