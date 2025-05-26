#include<stdio.h>

// 7개의 정수를 배열에 입력받고 역수로 출력

int main(void){
  int arr[7];
  for (int i = 0; i < 7; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 6; i > -1; i--){
    printf("%d ", arr[i]);
  }
  return 0;
}