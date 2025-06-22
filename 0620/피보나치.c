#include <stdio.h>

int fibo(int a);

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d\n", fibo(n-1));


  return 0;
}

int fibo(int a){
  int dp[100];
  dp[0] = 0;
  dp[1] = 1;
  for (int i = 2; i <= a; i++){
    dp[i] = dp[i-1] + dp[i-2];
  }
  return dp[a];
}