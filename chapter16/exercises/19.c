/*
 * =====================================================================================
 *
 *       Filename:  19.c
 *
 *    Description:  Declare a structure with the following members whose tag is pinball_
 *                  machine:
 *                  name - a string of up to 40 characters
 *                  year - a integer (representing the year of manufacture)
 *                  type - an enumeration with the values EM (electromechanical) and SS
 *                  (solid state)
 *                  players - an integer (representing the maximum number of players)
 *
 *        Version:  1.0
 *        Created:  04/27/2021 10:36:04 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

struct pinball_machine {
  char name[40];
  int year;
  enum {EM, SS } type;
  int players;
};
