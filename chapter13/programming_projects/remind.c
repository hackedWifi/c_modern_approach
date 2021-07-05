/*
 * =====================================================================================
 *
 *       Filename:  remind.c
 *
 *    Description:  (a) Have the program print an error message and ignore a reminder if
 *                      the corresponding day is negative or larger than 31. HINT: Use
 *                      the continue statement.
 *                  (b) Allow the user to enter a day, a 24-hour time, and a reminder. 
 *                      The  printed reminder list should be sorted first by day, then by
 *                      time . (The original program allows the user to enter a time, but 
 *                      it's treated as part  of the reminder.)
 *                  (c) have the programprint a one-year reminder list. Require the user
 *                      to enter days in the form month/day.
 *
 *        Version:  1.0
 *        Created:  03/01/2021 03:42:29 PM
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

#define MAX_REMIND 50            /*  */
#define MSG_LEN 60            /*  */

int read_line(char str[], int n);
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    char reminders[MAX_REMIND][MSG_LEN + 3];
    char time_str[16], msg_str[MSG_LEN + 1];
    // (b)
    int month, day, hr, min, i, j, num_remind = 0;


    for ( ; ; ) {
        if(num_remind == MAX_REMIND) {
            printf("-- No space left --\n");
            break;
        }
        printf ( "Enter month, day, \'mm/dd\' time, and reminder: " );
    // (b)
        scanf ( "%2d/%2d",&month, &day); 
        if(day == 0 || month == 0)
            break;

        // (a)
        else if(day < 0 || day > 31)
        {
            printf("You have entered an invalid day\n");
            while(getchar() != '\n')
                ;
            continue;
        }
        scanf("%2d:%2d", &hr, &min);
        sprintf(time_str, "%2.2d/%2.2d %2.2d:%.2d", month, day, hr, min);
        read_line(msg_str, MSG_LEN);
        for ( i = 0; i < num_remind; i++ ) 
            if(strcmp(time_str, reminders[i]) < 0) 
                break;

        for ( j = num_remind ; j > i; j-- ) 
            strcpy(reminders[j], reminders[j - 1]);

        // (b)
        strcpy(reminders[i], time_str);
        strcat(reminders[i], msg_str);
        
        num_remind++;

    }

    printf ( "\nDate Time Reminder\n" );

    for ( i = 0; i < num_remind; i++ ) {
        printf(" %s\n", reminders[i]);
    }

    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  read_line
 *  Description:  
 * =====================================================================================
 */
int read_line(char str[], int n )
{
    int ch, i = 0;
    while((ch = getchar()) != '\n')
        if(i < n)
            str[i++] = ch;
    str[i] = '\0';

    return i;
}		/* -----  end of function read_line  ----- */
