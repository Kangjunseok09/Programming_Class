#include<stdio.h>

// 이차원배열(3x3) 졍수 입력받고 대칭판별
int main(void){
  int n=0;
  int arr[3][3];
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      scanf("%d", &arr[i][j]);
    }
  }
  for(int i = 0; i < 3; i++){
    for(int j = 0; j < 3; j++){
      if(arr[i][j] != arr[j][i]){
        n++;
      }
    }
  }
  if( n>0){
    printf("대칭아님");
  }else{
    printf("대칭형님");
  }
  return 0;
}