#include<stdio.h>

int main(void){

  int n, x = 0, y = 0, cnt = 0;
  scanf("%d", &n);
  int arr[n][n], dx[4] = {0, 1, 0, -1}, dy[4] = {1, 0, -1 , 0};
  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      arr[i][j] = 0;
    }
  }
  for(int i = 1; i <= n*n; i++){
    arr[x][y] = i;
    int k = x + dx[cnt], l = y + dy[cnt];
    if(k < 0 || k == n || l < 0 || l == n || arr[k][l] != 0){
      cnt = (cnt + 1) % 4;
    }
    x += dx[cnt];
    y += dy[cnt];

  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  }

  return 0;
}