#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    srand(time(NULL));
    int num1 = rand() % 10 + 1;
    int num2 = rand() % 10 + 1;
    int sum = num1 + num2;
    printf("The sum of %d and %d is: %d\n", num1, num2, sum);
    return 0;
}
