CC=gcc
CFLAGS=-Wall -Wextra -Wpedantic -std=c99

queue: queue.o queueclient.o
	$(CC) -o queue queue.o queueclient.o $(CFLAGS)

queue.o: queue.c queue.h
	$(CC) -c queue.c $(CFLAGS)

queueclient.o: queueclient.c queue.h
	$(CC) -c queueclient.c $(CFLAGS)

