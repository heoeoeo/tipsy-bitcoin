CC=gcc
CFLAGS=-Wall -lm
SRC=src/main.c src/rotate.c src/render.c src/ascii_art.c

all:
	$(CC) $(SRC) -o tipsy_bitcoin $(CFLAGS)