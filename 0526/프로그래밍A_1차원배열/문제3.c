#include<stdio.h>

// 7개의 정수를 배열에 입력받고 홀수만 출력

int main(void){
  int arr[7], odd = 0;
  for (int i = 0; i < 7; i++){
    scanf("%d", &arr[i]);
  }
  for (int i = 0; i < 7; i++){
    if(arr[i] % 2){
      printf("%d ", arr[i]);
    }
  }
  return 0;
}