CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

stack: stackADT2.o stackclient.o
	$(CC) -o stack stackADT2.o stackclient.o $(CFLAGS)

stack.o: stackADT2.c stack.h
	$(CC) -c stackADT2.c $(CFLAGS)

stackclient.o: stackclient.c stack.h
	$(CC) -c stackclient.c $(CFLAGS)

