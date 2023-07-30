#include <stdio.h>
#include <stdlib.h>

int main() {
  int num1, num2;
  char operator;

  printf("Enter the operator(+,-,*,/): ");
  scanf("%c", &operator);

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