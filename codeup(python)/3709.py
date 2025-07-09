n = int(input())
mod = 100000007
dp = [0] * n
def fibo(n):
    if n == 1:
        return 1
    if n == 1:
        return 1
    dp[0] = 1
    dp[1] = 2
    for i in range(2, n):
        dp[i] = dp[i-1] + dp[i-2]
    return dp[n-1]
    
print(fibo(n) % mod)