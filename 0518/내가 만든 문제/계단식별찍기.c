#include<stdio.h>
int main(void){
  // 계단 형태로 별찍기
  // 예시입력 5
  // 예시출력 
  // *
  // **
  // ***
  // ****
  // *****
  int n;
  scanf("%d", &n);
  for(int i = 1; i < n + 1; i++){
    for(int j = 0; j < i; j++){
      printf("*");
    }
    printf("\n");
  }
  return 0;
}