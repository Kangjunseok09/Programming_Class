#include<stdio.h>

int main(void){
  int a, b, result = 1;
  scanf("%d %d", &a, &b);

  for(int i = 0; i <= b; i++){
    if(a % i == 0 && b % i == 0){
      result = i;
    }
  }
  printf("%d\n", result);

  return 0;
}