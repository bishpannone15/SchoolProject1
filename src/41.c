#include <stdio.h>

void main() {
    int i;
    printf("This is a simple program in C.");
    for (i = 0; i < 10; i++) {
        printf("%d", i);
        if (i % 2 == 0) {
            break;
        }
    }
}
