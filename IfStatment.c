#include <stdio.h>

int main() {
  int intA = 0;
  int intB = 0;
  char charEquation;

  scanf("%d %c %d", &intA, &charEquation, &intB);

  switch (charEquation) {
  case '+':
    printf("=== %d", intA + intB);
    break;

  case '-':
    printf("=== %d", intA - intB);
    break;

  case '/':
    if (intB) {
      printf("=== %.2lf", (double)intA / intB);
    } else {
      printf("Nice try :/");
    }
    break;

  case '*':
    printf("=== %d", intA * intB);
    break;

  default:
    printf("Invalid ");
    break;
  }
  printf("\n");

  return 0;
}