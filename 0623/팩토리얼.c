#include <stdio.h>

int fac(int a);

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d\n", fac(n));
  return 0;
}

int fac(int a){
  int result = 1;
  for(int i = 1; i <= a; i++){
    result *= i;
  }

  return result;
}