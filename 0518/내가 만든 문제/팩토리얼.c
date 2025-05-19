#include <stdio.h>
int main(void){
  // 정수 n을 입력받고 그 정수의 팩토리얼을 출력한다
  // 예시입력 10
  // 예시 출력 3628800
  int n, result = 1;
  scanf("%d", &n);
  for (int i = 1; i < n+1; i++){
    result *= i;
  }
  printf("%d\n", result);
  return 0;
}