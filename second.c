#include <stdio.h>
#include <stdbool.h>
#include <unistd.h> // For sleep function

int main() {
    bool isGreen = false;

    printf("Waiting at a traffic light:\n");

    while (!isGreen) {
        printf("Traffic light is red. Waiting...\n");
        sleep(2); // Simulating time passing

        // In a real scenario, some condition would determine if the light turns green
        isGreen = true; // Simulating the light turning green
    }

    printf("Traffic light is green. Go!\n");

    return 0;
}
