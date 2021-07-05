/*
 * Explain what effect the following macro has on its arguments. You may assume 
 * that the arguments have the same type.
 *
 *
 */
#define M(x,y) ((x)^=(y),(y)^=(x),(x)^=(y))


// The macro swaps the values of x and y
