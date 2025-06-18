n = int(input())
alist = list(map(int, input().split()))
cnt = 0
for i in range(n):
    judge = False
    for j in range(n-1-i):
        if alist[j] > alist[j+1]:
            alist[j], alist[j+1] = alist[j+1], alist[j]
            judge = True
    if judge:
        cnt += 1

print(cnt)