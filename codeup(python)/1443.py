n = int(input())
alist = [int(input()) for _ in range(n)]

for i in range(1, n):
    key = alist[i]
    j = i - 1
    while j >= 0 and alist[j] > key:
        alist[j + 1] = alist[j]
        j -= 1
    alist[j + 1] = key

for i in alist:
    print(i)