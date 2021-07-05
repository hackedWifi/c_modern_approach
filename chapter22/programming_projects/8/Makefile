CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

inventory: inventory.o readline.o 
	$(CC) -o inventory inventory.o readline.o $(CFLAGS)

readline.o: readline.c readline.h
	$(CC) -c readline.c $(CFLAGS)

inventory.o: inventory.c 
	$(CC) -c inventory.c $(CFLAGS)

