/*
 * =====================================================================================
 *
 *       Filename:  6.c
 *
 *    Description:  Modify  the qsort.c program of Section 9.6 so that low, high, 
 *                  and middle are pointers to array element rather than integers. The
 *                  split function will need to return a pointer, not an integer.
 *
 *        Version:  1.0
 *        Created:  02/28/2021 03:50:03 PM
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
#define N 10            /*  */

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */

void quicksort ( int a[], int *low, int *high);
int *split(int a[], int *low, int *high);

int main ( int argc, char *argv[] )
{
    int a[N] , i;  

    printf ( "Enter %d numbers to be sorted:: ", N );

    for ( i = 0; i < N; i++ ) {
        scanf("%d", &a[i]);
    }
    quicksort(a , a, a + N - 1);
    printf("In sorted order: ");

    for ( i = 0; i < N; i++ ) {
        printf("%d ", a[i]);
    }
    printf ( "\n" );
    return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */



/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  quicksort
 *  Description:  
 * =====================================================================================
 */
void quicksort ( int a[], int *low, int *high)
{
    int *middle;

    if(low >= high) return;
    middle = split(a, low, high);
    quicksort(a, low, middle - 1);
    quicksort(a, middle + 1, high);
}		/* -----  end of function quicksort  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  split
 *  Description:  
 * =====================================================================================
 */
int *split (int a[], int *low, int *high )
{
    int part_element = *low;

    for ( ; ;  ) {
        while (low < high && part_element <= *high) 
        {
            high--;
        }
        if(low >= high) break;
        *low++ = *high;


        while ( low < high && *low <= part_element ) {
            low++;
        }
        if(low >= high) break;
        *high-- = *low;

    }
    *high = part_element;
    return high;
}		/* -----  end of function split  ----- */
