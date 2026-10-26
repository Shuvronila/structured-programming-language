#include <stdio.h>

void myFunction();
void myOtherFunction();

int main() {
  myFunction(); 
  return 0;
}

void myFunction() {
  printf("Some text in myFunction\n");
  myOtherFunction(); 
}

void myOtherFunction() {
  printf("Hey! Some text in myOtherFunction\n");
}