#include <stdio.h>

int main() {
  int myNumbers[5] = {10, 20, 30, 40, 50};
  int *start = &myNumbers[1]; 
  int *end = &myNumbers[4];   

  printf("%ld\n", end - start); 
  return 0;
}