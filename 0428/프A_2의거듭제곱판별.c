#include<stdio.h>

int main(void){
  int a;
  scanf("%d", &a);
  if ((a & (a-1)) == 0){
    printf("2의 거듭제곱");
  }else{
    printf("아니다");
  }

  return 0;
}