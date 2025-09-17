# Compiler and flags
CC = gcc
CFLAGS = -Wall -g

TASK1 = task1
TASK2 = task2
TASK3 = task3

$(TASK1): lab1.c task1.c utils.c 
	$(CC) $(CFLAGS) lab1.c task1.c utils.c -o $(TASK1)

$(TASK2): lab1.c task1.c task2.c tiny-AES-c/aes.o utils.c
	$(CC) $(CFLAGS) lab1.c task1.c task2.c utils.c tiny-AES-c/aes.o -o $(TASK2)

$(TASK3): lab1.c task3.c utils.c
	$(CC) $(CFLAGS) lab1.c task3.c utils.c -o $(TASK3)
