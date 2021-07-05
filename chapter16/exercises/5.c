/*
 * =====================================================================================
 *
 *       Filename:  5.c
 *
 *    Description:  Write the following functions, assuming that the date structure 
 *                  contains three members:
 *
 *                  (a) int day_of_year(struct date d);
 *                  Returns the day of the year (an integer between 1 and 366) that 
 *                  corresponds to the date d.
 *
 *                  (b) int compare_dates(struct date d1, struct date d2);
 *                  Returns -1 if d1 is an earlier date than d2, +1 if d1 is a later 
 *                  date than d2, and 0 if d1 and d2 are the same.
 *
 *        Version:  1.0
 *        Created:  04/20/2021 04:35:58 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <ctype.h>
struct date {
    int month, day, year;
};

int day_of_year(struct date d);
int compare_dates(struct date d1, struct date d2);
int main(void) {
    struct date d1 = { 12, 21, 1982 };
    struct date d2 = { 12, 21, 1982 };
    
    /*printf("Day is: %d", day_of_year(d1));*/
    printf("Date is: %d", compare_dates(d1, d2)); 
    

}

int day_of_year(struct date d)
{
    int months[12] = { 31, 28, 31, 
                    30, 31, 30, 31, 
                    31, 30, 31, 30, 31 };
    int day = 0, i = 1;
    while(i < d.month)
    {
        day += months[i];
        i++;
    }
    return day + d.day;
}

int compare_dates(struct date d1, struct date d2)
{
    int day1 = day_of_year(d1);   
    int day2 = day_of_year(d2);   

    if(day1 > day2) //&& && (d1.day > d2.day))
        return 1;
    else if(day1 < day2 )  
        return -1;
    return 0;

}
