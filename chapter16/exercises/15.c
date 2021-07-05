/*
 * =====================================================================================
 *
 *       Filename:  15.c
 *
 *    Description:  (a) Declare a tag for an enumeration whose values represent the se-
 *                  ven days of the week.
 *
 *                  (b) Use typedef to define a name for the enumeration of part (a)
 *
 *        Version:  1.0
 *        Created:  04/25/2021 09:44:05 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */

// (a)
enum week { MON, TUE, WED, THU, FRI, SAT, SUN };

// (b)
typedef enum { MON, TUE, WED, THU, FRI, SAT, SUN } Week ;
int main(void) {


}

