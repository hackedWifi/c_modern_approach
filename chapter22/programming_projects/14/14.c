/* Modify Programming Project 15 from Chapter 8 so that the program prompts the
 * user to enter the name of a file containing the message to be encrypted:
 *
 * Enter name of file to be encrypted: message.txt
 * Enter shift amount: 3
 *
 * The program then writes the encrypted message to a file with the same name
 * but an added extension of .enc. In this example, the original file name is
 * message.txt, so the encrypted message will be stored in a file named 
 * message.txt.enc. There's no limit on the size of the file to be encrypted or
 * on the length of each line in the file.
 *
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE
/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
int main ( int argc, char *argv[] )
{
   int ch, shift = 0;
   char filename[50], outfile[50];

   FILE *fp, *out;
   printf("Enter name of file to be encrypted: ");
   scanf("%s", filename);
   //fgets(filename, FILENAME_MAX, stdin);
   if((fp = fopen(filename, "r")) == NULL)
   {
     printf("Cannot open %s\n", filename);
     exit(EXIT_SUCCESS);
   }
   
   strcpy(outfile, filename);
   strcat(outfile, ".enc");

   if((out = fopen(outfile, "wb")) == NULL)
   {
     printf("Cannot open %s", outfile);
     fclose(fp);
     exit(EXIT_SUCCESS);
   }

   printf("Enter shift amount (1-25): ");
   scanf("%d", &shift);


   while( (ch = fgetc(fp)) != EOF) {
      if(ch >= 97 && ch <= 122) { 
         ch  = ( (ch - 97) + shift ) % 26 + 97;

         putc(ch, out);
      }

      else if(ch >= 65 && ch <= 90) { 
          ch = ( ( ch - 65) + shift) % 26 + 65;

          putc(ch, out);
      }
      else {

        putc(ch, out);

      }

   }
   fclose(fp);
   fclose(out);

   return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

