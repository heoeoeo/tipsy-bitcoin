#include <math.h>
#include <unistd.h>
#include <string.h>
#include "tipsy.h"
#include "ascii_art.h"

void run_animation() {
    float angle = 0;

    int max_len = 0;
    for (int i = 0; i < art_lines; i++) {
        int len = strlen(ascii_art[i]);
        if (len > max_len) max_len = len;
    }
    float cx = max_len / 2.0;
    float cy = art_lines / 2.0;

    while (1) {
        char buffer[HEIGHT][WIDTH];
        clear_buffer(buffer);

        for (int y = 0; y < art_lines; y++) {
            for (int x = 0; x < strlen(ascii_art[y]); x++) {
                char ch = ascii_art[y][x];
                if (ch == ' ') continue;

                int rx, ry;
                rotate_point(cx, cy, x, y, angle, &rx, &ry);

                int screen_x = rx + (WIDTH / 2 - (int)cx);
                int screen_y = ry + (HEIGHT / 2 - (int)cy);

                if (screen_x >= 0 && screen_x < WIDTH && screen_y >= 0 && screen_y < HEIGHT)
                    buffer[screen_y][screen_x] = ch;
            }
        }

        draw(buffer);
        usleep(40000);
        angle += 3;
        if (angle >= 360) angle -= 360;
    }
}

int main() {
    run_animation();
    return 0;
}