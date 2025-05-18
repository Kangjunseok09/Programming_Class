#include <stdio.h>
int main(void){
  int n;
  scanf("%d", &n);
  if (n % 2 == 0 && n % 3 == 0){
    printf("짝수이자 3의배수입니다\n");
  }else{
    printf("짝수이자 3의배수가 아닙니다\n");
  }
  return 0;
}