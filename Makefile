CC = gcc

CFLAGS = -Wall -Wextra -g -Iinclude

SRC = src/main.c \
      src/input.c \
      src/parser.c \
      src/process.c \
      src/builtin.c \
      src/signals.c \
      src/pipes.c \
      src/redirect.c

TARGET = bin/shellforge

all:
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

asan:
	mkdir -p bin
	$(CC) $(CFLAGS) -fsanitize=address $(SRC) -o $(TARGET)

run: all
	./$(TARGET)

clean:
	rm -rf bin/*
