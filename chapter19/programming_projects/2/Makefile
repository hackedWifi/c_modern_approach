CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

rpn: stackADT3.o rpn.o
	$(CC) -o rpn stackADT3.o rpn.o $(CFLAGS)

stack.o: stackADT3.c stack.h
	$(CC) -c stackADT3.c $(CFLAGS)

rpn.o: rpn.c stack.h
	$(CC) -c rpn.c $(CFLAGS)

