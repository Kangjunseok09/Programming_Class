#include<stdio.h>
// Strlen없이 문자열 길이 출력
int main(void){
  char arr[1000];
  int i = 1;
  scanf("%s", arr);
  
  while (arr[i-1] != '\0'){
    i++;
  }
  printf("%d\n", i - 1);
  return 0;
}