#include<stdio.h>

int main(void){
  char str[100];
  int len = 0, check = 1;
  scanf("%s", str);

  while(str[len] != '\0'){
    len++;
  }

  for(int i = 0; i < len / 2; i++){
    if(str[i] != str[len - 1 - i]){
      check = 0;
      break;
    }
  }
  if(check == 1){
    printf("Yes\n");
  }else{
    printf("No\n");
  }
  return 0;
}