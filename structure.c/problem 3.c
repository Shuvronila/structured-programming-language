#include <stdio.h>

struct Owner {
  char firstName[30];
  char lastName[30];
};

struct Car {
  char brand[30];
  int year;
  struct Owner owner; 
};

int main() {
  struct Owner owner = {"John", "Doe"};
  struct Car car1 = {"Toyota", 2010, owner};

  printf("Car: %s (%d)\n", car1.brand, car1.year);
  printf("Owner: %s %s\n", car1.owner.firstName, car1.owner.lastName);

  return 0;
}