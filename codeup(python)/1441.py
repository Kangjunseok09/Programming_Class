n = int(input())
alist = [int(input()) for _ in range(n)]

for i in range(n):
  for j in range(n - 1 - i): 
    if alist[j] > alist[j + 1]:
      alist[j], alist[j + 1] = alist[j + 1], alist[j]

for i in alist:
  print(i)