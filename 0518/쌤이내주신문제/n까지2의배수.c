#include <stdio.h>

int main(void){
  int n;
  scanf("%d", &n);
  for(int i = 1; i < n+1; i++){
    if(i%2==0){
      printf("%d ", i);
    }
  }
  return 0;
}