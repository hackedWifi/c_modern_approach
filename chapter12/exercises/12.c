/*
 * =====================================================================================
 *
 *       Filename:  12.c
 *
 *    Description:  Write the following function
 *                  void find_two_largest(const int *a, int n, int *largest,
 *                                          int *second_largest);
 *                  a points to an array of lenght n. The function searches the array for
 *                  its largest and second_largest elements, respectively. Use pointer
 *                  arithmetic─not subscripting─to visit array elements.
 *
 *        Version:  1.0
 *        Created:  02/17/2021 10:26:20 PM
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
void find_two_largest(const int *a, int n, int *largest,
                        int *second_largest);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
    int n = 5;
    int a[] = {10, 63 ,34,65,20};
    int largest ,sec_largest ;
    find_two_largest(a, n, &largest, &sec_largest);
    printf("Largest number: %d\n", largest);
    printf("Second Largest number: %d\n", sec_largest);
    return EXIT_SUCCESS; 
    printf("\n");

        return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

void find_two_largest(const int *a, int n, int *largest,
                        int *second_largest) 
{
    const int *p = a;
    *largest = *second_largest = *p;

    for ( p = a; p < a + n; p++ ) {
       if( *p > *largest ){
           *second_largest = *largest;
           *largest = *p;
       }
    
       else if(*p > *second_largest ){
           *second_largest = *p;
    }
    }

}
