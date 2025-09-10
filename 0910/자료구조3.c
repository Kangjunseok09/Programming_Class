#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int x, cnt = 0;
  int *arr = (int*)malloc(sizeof(int) * 15);

  for (int i = 0; i < 15; i++) {
    scanf("%d", &x);
    if(x % 2 == 0){
      arr[cnt++] = x;
    }
  }

  arr = realloc(arr, sizeof(int) * cnt);

  for (int i = 0; i < cnt; i++) {
    printf("%d ", arr[i]);
  }
  printf("\n");

  free(arr);
  return 0;
}