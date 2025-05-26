#include<stdio.h>

// 이차원배열(3x3) 졍수 입력받고 오른쪽 아래 대각선 합과 왼쪽 대각선 아래 합 출력
int main(void){
  int arr[3][3], right = 0, left = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if (i == j){
        right += arr[i][j];
      }
      if (i+j == 2){
        left += arr[i][j];
      }
    }
  }
  printf("오른쪽 아래 대각선 합: %d 왼쪽 아래 대각선 합: %d\n", right, left);
  return 0;
}