#include<stdio.h>

int main(void){
  int a, b;
  char c;

  scanf("%d %d %c", &a, &b, &c);
  switch (c)
  {
  case '+':
    printf("%d\n", a + b);
    break;
  case '-':
    printf("%d\n", a - b);
    break;
  case '*':
    printf("%d\n", a * b);
  case '/':
    printf("%.2lf\n", (double)a / (double)b);
    break;
  case '%':
    printf("%d\n", a % b);
  default:
    printf("잘못입력하셨습니다.\n");
    break;
  }
  return 0;
}