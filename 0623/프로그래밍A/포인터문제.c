#include<stdio.h>

int main(void){
  int* a;
  int b[5] = {2, 4, 7};
  a = b;
  printf("%d %d %p", *a+3, *(a+3), a+3);  // *a+3 --> b[0] + 3 == 5
                                          // *(a+3) --> b[3] == 0
                                          // a+3  --> b의 주솟값에 3 * 4(int) = 12 를 더한값.
  return 0;
}