#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to calculate the sum of two numbers
int sum(int num1, int num2) {
    return num1 + num2;
}

// Function to calculate the average of three numbers
double average(int num1, int num2, int num3) {
    return (num1 + num2 + num3) / 3.0;
}

int main() {
    // Declare variables
    int num1 = 10, num2 = 20, result;

    // Call the sum function and store the result in a variable
    result = sum(num1, num2);

    // Print the result
    printf("The sum of %d and %d is %d\n", num1, num2, result);

    // Call the average function and store the result in a variable
    result = average(num1, num2, 30);

    // Print the result
    printf("The average of %d, %d, and %d is %.2f\n", num1, num2, 30, result);

    return 0;
}
