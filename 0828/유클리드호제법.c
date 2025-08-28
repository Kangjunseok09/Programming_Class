#include<stdio.h>

int gcd(int a, int b);

int main(void){

  int a, b;
  scanf("%d %d", &a, &b);

  // 반복 뺄셈
  // while (1){

  //   if(a == b) break;
    
  //   if(a > b){
  //     a -= b;
  //   }else{
  //     b -= a;
  //   }
  // }

  printf("%d\n", gcd(a, b));

  return 0;
}

// 유클리드 호제법
int gcd(int a, int b){
  if(b == 0) return a;
  else return gcd(b, a%b);
}

// 뺄셈
// int gcd(int a, int b){
//   if(a == b) return a;
  
//   if(a > b) return gcd(a-b, b);
//   else return gcd(b-a, a);
// }
