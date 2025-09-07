#include<stdio.h>

int main(void){

  int n, num = 1;
  scanf("%d", &n);
  int arr[n][n];

  for (int k = 0; k < 2 * n - 1; k++) {   
    for (int i = 0; i < n; i++) {       
      int j = k - i;                  
      if (j >= 0 && j < n) {          
        arr[i][j] = num++;          
      }
    }
  }

  for(int i = 0; i < n; i++){
    for(int j = 0; j < n; j++){
      printf("%2d ", arr[i][j]);
    }
    printf("\n");
  }


  return 0;
}