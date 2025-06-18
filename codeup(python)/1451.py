n = int(input())
alist = [int(input()) for _ in range(n)]

alist = sorted(alist)

for i in alist:
    print(i)