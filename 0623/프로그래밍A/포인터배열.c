#include<stdio.h>

int main(void){
  char arr[3][3] = {{'a', 'b', 'c'}, {'d', 'e', 'f'}, {'g', 'h', 'i'}};
  int i = 1, j = 1;
  // arr의 주소가 10번지일때
  printf("%c\n",*(*(arr+i))); // 13
  printf("%p\n", arr[i]+j); // 14
  printf("%c\n", *(arr[i++]+j));  // e
  printf("%p\n", *(arr+i)+j); // 17
  printf("%c\n", *(*(arr+i)+j));  // h
  return 0;
}