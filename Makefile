CC = gcc
FILES = main.c
CFLAGS = -Wall -Wextra -pedantic -ledit -std=c99
OUT_EXE = main
BIN_FOLDER = bin/

all: clean build

build:
	$(CC) $(FILES) -o $(BIN_FOLDER)/$(OUT_EXE) $(CFLAGS)

clean:
	rm -rf $(BIN_FOLDER)
	mkdir -p $(BIN_FOLDER)

run:
	./$(BIN_FOLDER)/$(OUT_EXE)