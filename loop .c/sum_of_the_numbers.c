#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
  int sum=0,x;
  for(int i=1;i<=n;i++)
  {
    scanf("%d",&x);
    sum=sum+x;
  }
printf("Sum: %d",sum);
    return 0;
}
