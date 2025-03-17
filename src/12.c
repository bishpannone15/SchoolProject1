#include <stdio.h>
#include <stdlib.h>

int main() {
    // Declare variables
    int age;
    char name[20];

    // Ask user for input
    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    // Output results
    printf("Your name is %s and you are %d years old.\n", name, age);

    return 0;
}
