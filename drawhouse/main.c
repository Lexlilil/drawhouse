#include <stdio.h>

// Function to build the base of the house (walls and floor)
void build_base(int house_height) {
    for (int i = 0; i < house_height; i++) {
        printf("*");
        for (int j = 0; j < house_height + 2; j++) {
            printf(" ");
        }
        printf("*-|-|-|\n");
    }

    // Floor of the house
    for (int i = 0; i < house_height + 2 + 2; i++) {
        printf("*");
    }
    printf("-|-|-|\n");
}

int main(void) {
    int roof_width = 10, house_height = 5, fence_length;
    fence_length = house_height - 1;

    printf("Here is the house:\n");

    // Roof
    int roof_height = (roof_width + 1) / 2;
    for (int i = 0; i < roof_height; i++) {
        // Print spaces for left padding
        for (int j = 0; j < roof_height - i - 1; j++) {
            printf(" ");
        }
        // Print roof structure
        for (int j = 0; j < i * 2 + 1; j++) {
            printf("*");
        }
        printf("\n");
    }

    // Build the base (walls and floor)
    build_base(house_height);

    // Fence
    for (int i = 0; i < fence_length; i++) {
        printf("*");
        for (int j = 0; j < house_height + 2; j++) {
            printf(" ");
        }
        printf("*-|-|-|\n");
    }

    return 0;
}
