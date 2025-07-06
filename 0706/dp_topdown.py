dp = [0] * 1000
dp[1] = 1       

def fibo(n):
    if n <= 1:
        return dp[n]
    if dp[n]:
        return dp[n]
    dp[n] = fibo(n - 1) + fibo(n - 2)
    return dp[n]

n = int(input())
print(fibo(n))