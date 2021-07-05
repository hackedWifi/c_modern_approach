CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

match: stackADT3.o match.o
	$(CC) -o match stackADT3.o match.o $(CFLAGS)

stack.o: stackADT3.c stack.h
	$(CC) -c stackADT3.c $(CFLAGS)

match.o: match.c stack.h
	$(CC) -c match.c $(CFLAGS)

