#include <stdio.h>

int get_int(char text[64]);

int main (void) {
    int demo = get_int("Enter an number: ");
    printf("%d\n", demo);
}

int get_int(char text[64]) {
    int userInput;
    printf("%s", text);
    scanf("%d", &userInput);

    return userInput;
}