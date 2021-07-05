#include <stdio.h>
#include <stdlib.h>

void find_two_largest( int a[], int n, int *largest, int *sec_largest);
int main(int argc, char *argv[]) {
    int n = 5;
    int a[] = {10, 63 ,34,65,20};
    int largest ,sec_largest ;
    find_two_largest(a, n, &largest, &sec_largest);
    printf("Largest number: %d\n", largest);
    printf("Second Largest number: %d\n", sec_largest);
    return EXIT_SUCCESS; 
    printf("\n");
    }

void find_two_largest(int a[], int n, int *largest, int *sec_largest)
{
    int i; 
    *largest = *sec_largest = a[0];
    
    for(i = 0; i < n;  i++) {
        
        if(a[i] > *largest )
        {
            *largest = a[i];
        }
        }
    for(i = 0; i < n; i++)
    {
        if( a[i] > *sec_largest && a[i] != *largest) 
            //if( a[i] != *largest)
                *sec_largest = a[i];

    }

}
