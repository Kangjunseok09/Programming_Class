#include <stdio.h>

int main(void){
  int n, temp = 1, cnt = 0;
  scanf("%d", &n);
  while (n % temp != n){
    temp *= 10;
    cnt += 1;
  }
  printf("%d자리수\n", cnt);
  return 0;
}