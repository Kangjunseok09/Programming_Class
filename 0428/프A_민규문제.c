#include<stdio.h>

int main(void){
  long int a, b;
  scanf("%ld %ld", &a, &b);
  if ((b / a) * 100 <= 10) {
    printf("코딩마스터 %ld등", b);
  }else if (b > a){
    printf("잘못된 입력입니다.");
  }else if ((b/a) * 100 > 10){
    printf("코딩마스터 전단계%ld등", b);
  }

  return 0;
}