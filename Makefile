CC = gcc

CFLAGS = -Wall -Wextra -g -Iinclude

SRC = src/main.c src/input.c src/parser.c src/process.c src/builtin.c

TARGET = bin/shellforge

all:
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -f $(TARGET)
