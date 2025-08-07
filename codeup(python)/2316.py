import sys
input = sys.stdin.readline

n, m = map(int, input().split())
pigs = list(map(int, input().split()))

# 1) 1부터 m까지 각 수의 약수 개수를 미리 계산 (에라토스 식)
divisors = [0] * (m + 1)
for i in range(1, m + 1):
    for j in range(i, m + 1, i):
        divisors[j] += 1

# 2) 각 pig가 고른 수 v에 대해
#    약수 개수(divisors[v]) + 배수 개수(m // v) - 1(중복 제거)
out = []
for v in pigs:
    cnt = divisors[v]        # v의 약수 개수
    cnt += m // v            # v의 배수 개수 (v, 2v, 3v, … ≤ m)
    cnt -= 1                 # v 자신(약수이자 배수) 중복 제거
    out.append(str(cnt))

sys.stdout.write("\n".join(out))