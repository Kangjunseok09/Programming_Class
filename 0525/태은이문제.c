// 소수 ㄴㄴ

#include<stdio.h>

int main(void){
  int min, max, cnt = 0;
  scanf("%d %d", &min, &max);
  for (int i = min; i <= max; i++){
    for (int j = 2; j < i; j++){
      if (i%j == 0){
        cnt++;
        break;
      }
    }
  }
  printf("%d", cnt);
  return 0;
}