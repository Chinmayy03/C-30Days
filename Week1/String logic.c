#include <stdio.h>
#include <string.h>

int main() {
    char goal[] = "Master C by March 15";
    int length = strlen(goal);

    printf("Goal: %s\n", goal);
    printf("Number of characters: %d\n", length);
    
    if (length > 10) {
        printf("That's a solid goal for your 2nd semester!\n");
    }

    return 0;
}
