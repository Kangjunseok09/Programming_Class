#include <stdio.h>

int fibo(int n);

int main(void){
  int n;
  scanf("%d", &n);
  printf("%d\n", fibo(n));
  return 0;
}

int fibo(int n){
  static int dp[1000] = {0, 1};
  if(n <= 1) return dp[n];
  if(dp[n]) return dp[n];
  return dp[n] = fibo(n-1) + fibo(n-2);
}