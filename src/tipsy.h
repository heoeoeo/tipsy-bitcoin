#pragma once

#define WIDTH 80
#define HEIGHT 40

void rotate_point(float cx, float cy, float x, float y, float angle_deg, int *rx, int *ry);
void clear_buffer(char buffer[HEIGHT][WIDTH]);
void draw(char buffer[HEIGHT][WIDTH]);
void run_animation();