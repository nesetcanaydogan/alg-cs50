#include <stdio.h>

void draw (int n);
void drawUpsideDown (int n);

int main (void) {
    int height, udHeight;
    printf("Enter the height of bricks: ");
    scanf("%d", &height);
    printf("Enter the height of upside-down bricks: ");
    scanf("%d", &udHeight);

    draw(height);
    drawUpsideDown(udHeight);
}

void draw (int n) {
    int i, j;
    for (i = 1; i <= n; i++) {
        for (j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
}

void drawUpsideDown (int n) {
    int i, j;
    for (i = n; i > 1; i--) {
        for (j = 0; j < i; j++) {
            printf("#");
        }
        printf("\n");
    }
}