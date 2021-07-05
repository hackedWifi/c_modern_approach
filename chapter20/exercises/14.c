/* When stored according to IEEE floating-point standard, a float value consists
 * of a 1-bit sign (the leftmost - or most significant - bit), an 8-bit expo-
 * nent, and a 23-bit fraction, in that order. Desing a structure type that 
 * occupies 32 bits, with bit-field members corresponding to the sign, exponent,
 * and fraction. Declare the bit-fields to have type unsigned int. Check the ma-
 * nual for your compiler to determine the order of the bit-fields.
 *
 */

struct f {
  unsigned int  frac: 23, expo: 8, sign: 1;
};
