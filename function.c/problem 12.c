#include <stdio.h>

int addTen(int x) {
  return x + 10;
}

int main() {
  int myNum = 5;
  myNum = addTen(myNum);
  printf("%d\n", myNum);  
  return 0;
}