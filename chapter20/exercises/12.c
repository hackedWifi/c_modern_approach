/* The following function supposedly combines two bytes to form an unsigned
 * short integer. Explain why the function doesn't work and show how to fix
 * it.
 *
 * unsigned short create_short(unsigned char high_byte, 
 *                             unsigned char low_byte)
 * {
 *  return (high_byte << 8) + low_byte;
 *
 * }
 *
 */

// The '+' operator has higher precedence than the << bitwise operator. So,
// 8 gets added to low_byte before shifting 8 bits to left
