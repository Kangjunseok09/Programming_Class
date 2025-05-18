# 트리
n = int(input())
arr = [[] for i in range(n + 1)]
for i in range(n):
    a, b = map(int, input().split())
    arr[a].append(b)
    arr[b].append(a)
for i in range(1, n + 1):
    print(i, arr[i])
