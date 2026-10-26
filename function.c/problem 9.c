#include <stdio.h>

void swap(int *a, int *b) {
  int temp = *a;
  *a = *b;
  *b = temp;
}

int main() {
  int x = 5;
  int y = 10;

  swap(&x, &y);

  printf("x is %d, y is %d\n", x, y);  // x is 10, y is 5
  return 0;
}