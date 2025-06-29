#include<stdio.h>

int main(void){
  int arr[3][3];
  int sum = 0;
  for(int i = 0; i < 3; i++){
    for(int j = 0; j<3; j++){
      scanf("%d", &arr[i][j]);
    }
  }

  for(int i = 0; i < 3; i++){
    sum += arr[i][i];
  }
  printf("%d\n", sum);
  return 0;
}