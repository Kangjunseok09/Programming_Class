n = int(input())
alist = list(map(int, input().split()))
alist = sorted(alist, reverse=True)

for i in alist:
    print(i)