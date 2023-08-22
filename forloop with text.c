#include <stdio.h>

int main() {
    char text[] = "Hello";

    for (int i = 0; text[i] != '\0'; i++) {
        printf("%c\n", text[i]);
    }

    return 0;
}
