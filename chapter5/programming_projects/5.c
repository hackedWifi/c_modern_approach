/*
 * =====================================================================================
 *
 *       Filename:  2.c
 *
 *    Description:  Write a function that calculates the tax amount due of a taxable 
 *                  amount.
 *
 *        Version:  1.0
 *        Created:  12/07/2020 10:02:08 AM
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

float tax_due(float taxable_income);

int main ( int argc, char *argv[] )
{
    float tax = 0.0;
    printf ( "Enter the income tax amount: \n" );
    scanf ( "%f", &tax);

    printf ( "Your tax due is: %f\n", tax_due(tax ));
    
        return EXIT_SUCCESS;
}

float tax_due (float taxable_income )
{
    float tax = 0.0;
    if(taxable_income <= 750.0) tax = taxable_income * 0.01;
    if(taxable_income > 750.0 && taxable_income <= 2500.0) tax = 7.50 + (taxable_income - 750) * 0.02;
    if(taxable_income > 2250.0 && taxable_income <= 3750.0) tax = 37.50 + (taxable_income - 2250.0) * 0.03 ;
    if(taxable_income > 3750.0 && taxable_income <= 5250.0) tax = 82.50 + (taxable_income - 3750.0) * 0.04 ;
    if(taxable_income > 5250.0 && taxable_income <= 7000.0) tax = 142.5 + (taxable_income - 5250.0) * 0.05 ;
    if(taxable_income > 7000.0) tax = 230.00 + (taxable_income - 7000) * 0.06 ;
    return tax;
}

