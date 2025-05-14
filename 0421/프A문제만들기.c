#include<stdio.h>

// 시작하는 시간과 끝나는 시간을 입력하면 몇분차이인지 계산
int main(void){
  int h, m, h1, m1;
  scanf("%d:%d %d:%d", &h, &m, &h1, &m1);
  int start = h * 60 + m;
  int end = h1 * 60 + m1;

  if (start > end){
    printf("%d분\n", end - start + 1440);
  }else{
    printf("%d분\n", end - start);
  }
  return 0;
}