#include<stdio.h>

// 6개의 정수를 배열에 입력받고 거꾸로 바꿔서 출력

int main(void){
  int arr[7], temp;
  for (int i = 0; i < 7; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i<3; i++){
    temp = arr[i];
    arr[i] = arr[6-i];
    arr[6-i] = temp;
  }
  for(int i = 0; i<7; i++){
    printf("%d ", arr[i]);
  }
  return 0;
}