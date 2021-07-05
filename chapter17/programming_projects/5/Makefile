CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

word: 5.o readline.o 
	$(CC) -o word 5.o readline.o $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)

5.o: 5.c 
	$(CC) -c 5.c $(CFLAGS)

