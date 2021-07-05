/* Indicate which mode string is most likely to be passed to fopen in each of 
 * the following situations:
 * (a) A database management system opens a file containing records to be up-
 * taded.
 *
 * (b) A mail program opens a file of saved messages so that in can add addi-
 * tional messages to the end.
 *
 * (c) A graphic program opens a file containing a picture to be displayed on
 * the screen.
 *
 * (d) An operating system command interpreter opens a "shell script" (or
 * batch file") containing commands to be executed.
 *
 *
 */

//(a) w+
//(b) a+
//(c) rb
//(d) r
