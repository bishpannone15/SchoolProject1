#include <stdio.h>

int fact(int n) {
  if (n <= 1) {
    return 1;
  } else {
    return n * fact(n-1);
  }
}

int main() {
  int num, result;
  printf("Enter a positive integer: ");
  scanf("%d", &num);
  
  result = fact(num);
  printf("The factorial of %d is %d\n", num, result);
  
  return 0;
}
