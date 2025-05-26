#include<stdio.h>
// 이차원배열(2x3) 정수입력받고 역순으로 출력
int main(void){
  int arr[2][3];
  for(int i = 0; i<2; i++){
    for(int j = 0; j<3; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 1; i>-1; i--){
    for(int j = 2; j>-1; j--){
      printf("%d ", arr[i][j]);
    }
    printf("\n");
  }
  return 0;
}