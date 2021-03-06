/* The following loop appears in the fcopy.c program
 * while((ch = getc(source_fp)) != EOF)
 *  putc(ch, dest_fp)
 *
 * Suppose that we neglected to put parentheses around ch= getc(source_fp):
 *
 * while(ch = getc(source_fp) != EOF)
 *  putc(ch, dest_fp)
 * 
 * Would the program compile without an error? If so, what would the program
 * do when it's run.
 *
 */

// The program will compile with warnings.
// The program output to dest_fp will be control sequences
