n = int(input())
alist = [int(input()) for _ in range(n)]

for i in range(n - 1):
    min_idx = i
    for j in range(i + 1, n):
        if alist[j] < alist[min_idx]:
            min_idx = j
    alist[i], alist[min_idx] = alist[min_idx], alist[i]

for i in alist:
    print(i)