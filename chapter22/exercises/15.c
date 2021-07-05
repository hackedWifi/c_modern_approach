/* Write calls of fseek that perform the following file-positioning operations
 * on a binary file whose data is arranged in 64-byte "records" Use fp as the 
 * file pointer in each case.
 *
 * (a) Move to the beginning of record n. (Assume that the first record in the
 * file is record 0).
 *
 * (b) Move to the beginning of the last record in the file.
 *
 * (c) Move forward one record
 *
 * (d) Move backward two records.
 */

fseek(fp, n * 64L, SEEK_SET)
fseek(fp, -64L, SEEK_END)
fseek(fp, 64L, SEEK_CUR)
fseek(fp, -128L, SEEK_CUR)
