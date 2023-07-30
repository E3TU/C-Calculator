#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2, stop;
  char operator;
  stop = 0;
  while (stop == 0) {
    printf("Enter the operator(+, -, *, /, q to quit): ");
    scanf("%c", &operator);

    if (operator == 'q') {
        stop = 1;
        break;
    }

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    switch (operator) {
    case '+':
      printf("Result: %d\n", num1 + num2);
      break;
    case '-':
      printf("Result: %d\n", num1 - num2);
      break;
    case '*':
      printf("Result: %d\n", num1 * num2);
      break;
    case '/':
      printf("Result: %d\n", num1 / num2);
      break;
    default:
      printf("Error, you entered wrong operator");
    }

    return 0;
  }
}