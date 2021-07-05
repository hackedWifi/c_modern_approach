/* Each of the following macros defines the position of a single bit within
 * an integer:
 *
 * #define  SHIFT_BIT 1
 * #define CTRL_BIT 2
 * #define ALT_BIT 4
 *
 * The following statement is supposed to test whether any of the three bits
 * have been set, but it never displays the specified message. Explain why
 * the statement doesn't work and show how to fix it. Assume that key_codes
 * is an int variable.
 *
 * if ((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
 *  printf("No modifier key has been pressed\n");
 *
 */

// The code is missing a set of parentheses since the equality operator has
// higher precedence that the bitwise operators
//if ((key_code & (SHIFT_BIT | CTRL_BIT | ALT_BIT)) == 0)
