CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

queue: queueADT.o queueclient.o
	$(CC) -o queue queueADT.o queueclient.o $(CFLAGS)

queue.o: queueADT.c queueADT.h
	$(CC) -c queueADT.c $(CFLAGS)

queueclient.o: queueclient.c queueADT.h
	$(CC) -c queueclient.c $(CFLAGS)

