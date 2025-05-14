#include<stdio.h>

int main(void){
  int a = 0, b = 5;
  int output = (++a || b--) && (--b && a++);
  printf("%d %d %d\n", a, b, output); // a = 2, b = 4, c = 1
  return 0;
}