#include<stdio.h>

int fibo(int n);

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d\n", fibo(n));
  return 0;
}

int fibo(int n){

  int a=0, b=1;
  int temp = 0;

  for(int i = 0; i < n - 1; i++){
    temp = a + b;
    a = b;
    b = temp;
  }
  return a;
}