#include<stdio.h>

int fac(int a);

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d\n", fac(n));

  return 0;
}

int fac(int a){
  if(a == 1) return a;
  return fac(a-1) * a;
}