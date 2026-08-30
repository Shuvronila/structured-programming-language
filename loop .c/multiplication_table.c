#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    int multiply;
  for(int i=1;i<=10;i++)
  {
    multiply=n*i;
    printf("%d x %d = %d\n",n,i,multiply);
  }
    return 0;
}
