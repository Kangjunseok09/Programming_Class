#include<stdio.h>

int a = 10; // 전역변수

void f(){
  static int a = 5; // 정적변수 함수가 끝나도 메모리에 유지가 된다.
  a++;
  printf("%d\n", a);
}

int main(void){
  f(); // 6
  f(); // 7
  f(); // 8
  printf("%d\n", a); // 전역변수 a = 10
}