#include <stdio.h>

int sum(int a);

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d\n", sum(n));

  return 0;
}

int sum(int a){
  int sum = 0;
  for(int i = 1; i <= a; i++){
    sum += i;
  }

  return sum;
}