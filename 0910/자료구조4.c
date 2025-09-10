#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void){
  char *arr[10]; 
  int cnt=0;

  for(int i = 0; i < 10; i++){
    char str[1024]; 
    scanf("%s", str);
    arr[cnt]=malloc(strlen(str)+1); 
    strcpy(arr[cnt], str); 
    cnt++;
  }

  int max_idx = 0; 
  for(int i=1; i < cnt; i++) 
    if(strlen(arr[i]) > strlen(arr[max_idx])) max_idx = i;

  printf("%s\n", arr[max_idx]);

  for(int i=0; i<cnt ;i++) free(arr[i]);
}