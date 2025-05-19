#include <stdio.h>
#include "tipsy.h"

void clear_buffer(char buffer[HEIGHT][WIDTH]) {
    for (int y = 0; y < HEIGHT; y++)
        for (int x = 0; x < WIDTH; x++)
            buffer[y][x] = ' ';
}

void draw(char buffer[HEIGHT][WIDTH]) {
    printf("\033[H");
    for (int y = 0; y < HEIGHT; y++) {
        for (int x = 0; x < WIDTH; x++)
            putchar(buffer[y][x]);
        putchar('\n');
    }
}