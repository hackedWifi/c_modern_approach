/*
 * =====================================================================================
 *
 *       Filename:  7.c
 *
 *    Description:  Assume that the fraction structure contains two members: numerator
 *                  and denominator (both type int). Write functions that perform the 
 *                  following operations on fractions:
 *
 *                  (a) Reduce the fraction f to lowest terms. Hint: To reduce a fraction
 *                  to lowest terms, first compute the greatest common divisor (GCD) of
 *                  the numerator and denominator. Then divide both by the numerator and
 *                  denominator by the GCD.
 *
 *                  (b) Adds the fractions f1 and f2.
 *
 *                  (c) Substract the fraction f1 and f2.
 *
 *                  (d) Multiply the fraction f1 and f2.
 *
 *                  (e) Divide the fraction f1 and f2.
 *                  
 *                  The fractions f, f1, and f2 will be arguments of type struct fraction;
 *                  each function will return a value of type struct fraction. The 
 *                  fractions returned by the functions in parts (b)-(e) should be
 *                  reduced to lowest terms. Hint: You may use the function from part 
 *                  (a) to help write the functions in parts (b)-(e).
 *
 *        Version:  1.0
 *        Created:  04/22/2021 03:18:16 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Augusto del Valle (aj), ajdelvalle@gmail.com
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdio.h>
int gdc(int n, int d);

struct fraction {
    int n, d;
};

struct fraction lowest_term(struct fraction f);
struct fraction add(struct fraction f1, struct fraction f2);
struct fraction substract(struct fraction f1, struct fraction f2);
struct fraction multiply(struct fraction f1, struct fraction f2);
struct fraction divide(struct fraction f1, struct fraction f2);

int main(void) 
{
    int n = 2, d = 3, n1 = 5, d1 = 1;
    struct fraction f1 = { n, d}; 
    struct fraction f2 = { n1, d1}; 
    struct fraction result;
    result = divide(f1, f2); 
    /*f = lowest_term(f); */
    /*printf("Lowest term is: %d/%d", f.n, f.d ); */
    printf("Sum is: %d/%d", result.n, result.d  ); 

}

// (a )
struct fraction lowest_term(struct fraction f)
{
    int greatest = gdc(f.n, f.d);
    f.n = f.n/ greatest;
    f.d = f.d / greatest;
    return f;


}

struct fraction add(struct fraction f1, struct fraction f2)
{
    struct fraction sum;
    sum.n = (f1.n * f2.d) + (f1.d * f2.n);
    sum.d = (f1.d * f2.d) ; 

    return lowest_term(sum);

}

struct fraction substract(struct fraction f1, struct fraction f2)
{
    struct fraction sub;
    sub.n = (f1.n * f2.d) - (f2.n * f1.d);
    sub.d = (f1.d * f2.d) ; 

    return lowest_term(sub);

}

struct fraction multiply(struct fraction f1, struct fraction f2)
{
    struct fraction mul; 
    mul.n = f1.n * f2.n;
    mul.d = f1.d * f2.d;

    return lowest_term(mul);
}

struct fraction divide(struct fraction f1, struct fraction f2)
{ 
    struct fraction div; 
    div.n = f1.n * f2.d;
    div.d = f1.d * f2.n;

    return lowest_term(div);

}


int gdc(int m, int n){
    int r;
    if( n == 0) return m;
    while(n != 0)
    {
        r = m % n;
        m = n;
        n = r;

    }
    return m;

}
