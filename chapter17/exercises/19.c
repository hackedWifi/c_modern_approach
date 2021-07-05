/*
 * =====================================================================================
 *
 *       Filename:  19.c
 *
 *    Description:  Write a function that, when given a string as its argument, searches
 *                  the following array of structures for a matching command name, then 
 *                  calls the function associated with that name.
 *
 *        Version:  1.0
 *        Created:  05/08/2021 04:32:34 PM
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
#include <string.h>
void exec_cmd(char *cmd_name);
void new_cmd(void);
void open_cmd(void);
void close_cmd(void);
void close_all_cmd(void);
void save_all(void);
void save_as_cmd(void);
void print_cmd(void);
void exit_cmd(void);

struct {
  char *cmd_name;
  void (*cmd_pointer) (void);
} file_cmd[] =
{ {"new",       new_cmd},
  {"open",      open_cmd},
  {"close",     close_cmd},
  {"close all", close_all_cmd},
  {"save",      save_as_cmd},
  {"save all",  save_all},
  {"print",     print_cmd},
  {"exit",      exit_cmd}
};


int main(void)
{
  exec_cmd("inew");
  /*printf("size of file_cmd is: %d", ((int) (sizeof(file_cmd)/sizeof(file_cmd[0]))) );*/
}

void exec_cmd(char *cmd_name)
{
  int i = 0; 
  for(i = 0; i < ((int) (sizeof(file_cmd)/sizeof(file_cmd[0]))); i++)
      {
    if(strcmp(cmd_name , file_cmd[i].cmd_name) == 0)
    {
      file_cmd[i].cmd_pointer();
      break;
    }
    else {
      printf("Command name not found\n");
      break;
    }
    
  }

}

void new_cmd(void)
{
  printf("Open a new document\n");
}

void open_cmd(void)
{
}

void close_cmd(void)
{
}

void close_all_cmd(void)
{
}

void save_all(void)
{
}

void save_as_cmd(void)
{
}

void print_cmd(void)
{
}

void exit_cmd(void)
{
}

