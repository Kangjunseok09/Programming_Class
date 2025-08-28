#include<stdio.h>
#include<string.h>

int main(void){
  
  int sum = 0;
  char arr[100];
  fgets(arr, sizeof(arr), stdin);

  for(int i = 0; i < strlen(arr); i++){
    arr[i] = (int)arr[i];
    if(arr[i] > 47 && arr[i] < 58) sum += arr[i]-48;
  }
  printf("%d\n", sum);
  return 0;
}