# dp 배낭문제 

n, k = map(int, input().split())
reels = [tuple(map(int, input().split())) for _ in range(k)]

dp = [0] * (n + 1)

for x, y in reels:
    for i in range(n, x - 1, -1):  
        dp[i] = max(dp[i], dp[i - x] + y)

print(dp[n])