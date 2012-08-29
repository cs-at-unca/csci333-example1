CC = g++
CFLAGS = -Wall -Wextra -Werror -pedantic

lab1: lab1.cpp
	$(CC) $(CFLAGS) -o lab1 lab1.cpp