#include <stdio.h>

int main(void)
{
    // Declaring neccessary variables
    int counter, temp, sortLength; int sorter = 0;

    // Getting the information of the array's length from user
    printf("Type length of list you are going to create: ");
    scanf("%d", &sortLength);

    // Declaring the array and getting array items from user
    int range[sortLength];
    for (counter = 0; counter < sortLength; counter++) {
        printf("Randomized list item (%d): ", counter + 1);
        scanf("%d", &range[counter]);
    }

    // Printing the randomized array
    for (counter = 0; counter < sortLength; counter++) {
        printf("%d\t", range[counter]);
    }
    printf("\n");

    // Selection sorting (O[n^2]) (Ω[n^2])
    while (sorter < (sortLength * sortLength)) {
        for (counter = 0; counter < sortLength - 1; counter++) {
            if (range[counter] > range[counter + 1]) {
                temp = range[counter];
                range[counter] = range[counter + 1];
                range[counter + 1] = temp;
            }
        }
        sorter++;
    }

    // Printing the sorted array
    for (counter = 0; counter < sortLength; counter++) {
        printf("%d\t", range[counter]);
    }
    printf("\n");

    // End of the program
    return 0;
}