#include<stdio.h>

int main(void){
  // int a = 10;
  // printf("변수 a의 값: %d\n", a);
  // printf("변수 a의 주소: %p\n", &a);
  // int i;
  // char c;
  // double d;
  // printf("int: %zu, char: %zu, double: %zu\n", sizeof(i), sizeof(c), sizeof(d));

  // 포인터 선언 방식
  // int a = 10;
  // int *p;
  // p = &a;   p --> a의 주소

  // 포인터 크기
  // int* pi;
  // char* pc;
  // double* pd;
  // printf("int* 크기: %zu 바이트\n", sizeof(pi));
  // printf("char* 크기: %zu 바이트\n", sizeof(pc));
  // printf("double* 크기: %zu 바이트\n", sizeof(pd));
  // 보통 다 8바이트임

  // 포인터의 역참조
  // int a = 10;
  // int *p;
  // p = &a;
  // printf("a의 주소: %p\n", &a);
  // printf("p의 값: %p\n", p);
  // printf("*p의 값: %p\n", *p);

  // 포인터로 값 변경
  // *p = 20;

  // printf("변경 후 a의 값: %d\n", a);

  // 포인터를 사용해서 두 변수 값 바꾸기

  // int x = 50;
  // int y = 200;
  // int* px = &x;
  // int* py = &y;

  // // 포인터를 사용해서 x와 y의 값을 바꾸세요
  // int temp = *px;
  // *px = *py;
  // *py = temp;

  // printf("x = %d, y = %d\n", x, y); // x = 200, y = 50

  int a = 30;
  int b = 10;

  // 1. 정수형 포인터 pa와 pb 선언, 각각 a와 b의 주소를 저장
  int* pa = &a;
  int* pb = &b;
  // 2. 변수 a의 값과 주소 출력
  printf("a의 값: %d  a의 주소: %p\n", a, &a);

  // 3. 포인터 pa, pb가 가리키는 주소값 출력
  printf("pa의 주소값: %p\n", pa);
  printf("pb의 주소값: %p\n", pb);

  // 4. 포인터 pa, pb가 가리키는 주소에 저장된 값 출력
  printf("*pa의 값: %d\n", *pa);
  printf("*pb의 값: %d\n", *pb);
  
  // 5. 포인터를 이용해 a의 값을 90으로 변경
  *pa = 90;
k,.
  printf("a의 값: %d\n", *pa);
  
  // 6. 포인터를 이용해 a와 b의 값을 서로 변경 후 출력
  int temp = *pa;
  *pa = *pb;
  *pb = temp;

  printf("a의 값: %d, b의 값: %d\n", *pa, *pb);

  return 0;
}