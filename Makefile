CC = gcc
TARGET = xp
SRC = main.c

$(TARGET): Makefile $(SRC)
	$(CC) $(SRC) -o ${TARGET}
