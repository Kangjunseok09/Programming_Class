#include<stdio.h>
// 6개의 정수를 배열에 입력받고 합 출력
int main(void){
  int arr[6], sum=0;
  for(int i = 0; i<6; i++){
    scanf("%d", &arr[i]);
  }
  for(int i = 0; i < 6; i++){
    sum += arr[i];
  }
  printf("합 : %d\n", sum);
  return 0;

}