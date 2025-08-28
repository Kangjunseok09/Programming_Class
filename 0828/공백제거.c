#include<stdio.h>
#include<string.h>

int main(void){

  char arr[101];
  fgets(arr, sizeof(arr), stdin);

  for(int i = 0; i < strlen(arr); i++){
    if(arr[i] != ' '){
      printf("%c", arr[i]);
    }
  }
  return 0;
}