#include <stdio.h>
int main(void){
  // 정수를 입력받고 짝수이자 3의 배수이면 "짝수이자 3의배수입니다" 를 출력하고 아니면 "짝수이자 3의배수가 아닙니다"를 출력한다
  // 예시 입력 10
  // 예시 출력 짝수이자 3의배수가 아닙니다
  int n;
  scanf("%d", &n);
  if (n % 2 == 0 && n % 3 == 0){
    printf("짝수이자 3의배수입니다\n");
  }else{
    printf("짝수이자 3의배수가 아닙니다\n");
  }
  return 0;
}