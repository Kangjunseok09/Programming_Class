#include<stdio.h>

int add(int a, int b); // 함수 선언 (함수 프로토타입)
int main(void){
  int result = add(1, 3); // 메인함수
  printf("%d\n", result);
  return 0;
}

int add(int a, int b) // 함수 정의
{
  return a+b;
}
