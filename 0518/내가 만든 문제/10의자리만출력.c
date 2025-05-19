#include <stdio.h>
int main(void){
  // 정수를 입력받고 그 정수의 10의 자리숫자를 출력한다.
  // 예시 입력 330 
  // 예시 출력 3
  int n;
  scanf("%d",&n);
  
  printf("%d\n", n%100/10);
  return 0;
}