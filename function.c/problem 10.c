#include <stdio.h>

void minMax(int ages[], int length, int *min, int *max) {
  *min = ages[0];
  *max = ages[0];
  for (int i = 1; i < length; i++) {
    if (ages[i] < *min) {
      *min = ages[i];
    }
    if (ages[i] > *max) {
      *max = ages[i];
    }
  }
}

int main() {
  int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};
  int lowest, highest;

  minMax(ages, 8, &lowest, &highest);

  printf("Lowest age: %d\n", lowest);
  printf("Highest age: %d\n", highest);
  return 0;
}