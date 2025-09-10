#include <stdio.h>
#include <stdlib.h>

int main(void) {
  int n;
  scanf("%d", &n);

  int *arr = (int*)malloc(sizeof(int) * n);
  int *result = (int*)malloc(sizeof(int) * n);
  int conut = 0;

  for (int i = 0; i < n; i++) {
    scanf("%d", &arr[i]);

    int judge = 0;
    for (int j = 0; j < conut; j++) {
      if (result[j] == arr[i]) {
        judge = 1;
        break;
      }
    }
    if (!judge) {
      result[conut++] = arr[i];
    }
  }

  result = realloc(result, sizeof(int) * conut);

  for (int i = 0; i < conut; i++) {
    printf("%d ", result[i]);
  }
  printf("\n");

  free(arr);
  free(result);
  return 0;
}