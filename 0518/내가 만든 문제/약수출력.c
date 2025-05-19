#include <stdio.h>
int main(void){
  // 정수를 입력받고 그 정수의 약수를 모두 출력하라
  // 예시 입력 12
  // 예시 출력 1 2 3 4 6 12

  int n;
  scanf("%d", &n);
  for (int i = 1; i < n+1; i++){
    if(n % i == 0){
      printf("%d ", i);
    }
  }
  return 0;
}