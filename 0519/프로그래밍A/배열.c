#include <stdio.h>

int main(void){
  int n, arr[5];
  for (int i = 0; i < 5; i++){
    scanf("%d", &n);
    arr[i] = n;
  }
  for (int i = 0; i < 5; i++){
  printf("%d ", arr[i]);
  }
  return 0;
}