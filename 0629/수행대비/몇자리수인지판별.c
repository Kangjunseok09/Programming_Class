#include<stdio.h>

int main(void){
  int n, cnt=0;
  scanf("%d", &n);
  while(n > 0){
    n /= 10;
    cnt ++;
  }
  printf("%d\n", cnt);
  return 0;
}