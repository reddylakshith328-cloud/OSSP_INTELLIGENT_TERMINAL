CC = gcc
CFLAGS = -Wall -Wextra -g -Iinclude

SRC = src/main.c src/input.c src/parser.c
TARGET = bin/intelligent_terminal

all: $(TARGET)

$(TARGET): $(SRC)
	mkdir -p bin
	$(CC) $(CFLAGS) $(SRC) -o $(TARGET)

run:
	./$(TARGET)

clean:
	rm -rf bin/*
