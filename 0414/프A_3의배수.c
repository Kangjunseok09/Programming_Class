#include<stdio.h>

int main(int argc, char const *argv[])
{
  int n;
  scanf("%d", &n);
  if (!(n % 3)){
    printf("3의배수");
  }
  else {
    printf("조현우멍청이");
  }
  
  
  return 0;
}
