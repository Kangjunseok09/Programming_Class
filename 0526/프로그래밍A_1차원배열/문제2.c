#include<stdio.h>
// 6개의 정수를 배열에 입력받고 최대값, 최솟값 출력
int main(void){
  int arr[6], max = 0, min = 9909999;
  for(int i = 0; i<6; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < 6; i++){
    if (arr[i] > max){
      max = arr[i];
    }
    if (arr[i] < min){
      min = arr[i];
    }
  }
  printf("최대값 : %d 최소값 : %d\n", max, min);
  return 0;

}