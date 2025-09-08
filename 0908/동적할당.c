#include<stdio.h>
#include<stdlib.h>

int main(void){

  int n;
  printf("정수 개수 입력: ");
  scanf("%d", &n);

  int* arr = (int*)malloc(n * sizeof(int));
  if(arr == NULL){
    printf("메모리 할당 실패\n");
    return 1;
  }

  for(int i = 0; i < n; i++){
    arr[i] = i + 1;
    printf("%d ", arr[i]);
  }

  free(arr);

  return 0;
}