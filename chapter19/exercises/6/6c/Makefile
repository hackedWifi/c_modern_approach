CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

stack: stackADT3.o stackclient.o
	$(CC) -o stack stackADT3.o stackclient.o $(CFLAGS)

stack.o: stackADT3.c stack.h
	$(CC) -c stackADT3.c $(CFLAGS)

stackclient.o: stackclient.c stack.h
	$(CC) -c stackclient.c $(CFLAGS)

