#include <stdio.h>

int sum(int a);

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d\n", sum(n));

  return 0;
}

int sum(int a){
  if (a==0) return a;
  return sum(a-1) + a;
}