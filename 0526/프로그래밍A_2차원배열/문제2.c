#include<stdio.h>

// 이차원배열(2x3) 정수입력받고 출력
int main(void){
  int arr[2][3], sum = 0;
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 0; i < 2; i++){
    for(int j = 0; j < 3; j++){
      sum += arr[i][j];
    }
  }
  printf("전체 합 : %d\n", sum);
}