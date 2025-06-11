n = int(input())
alist = []
for i in range(n):
  name, age = input().split()
  alist.append((name, int(age)))
alist = sorted(alist, key = lambda x : x[1], reverse=True) 

print(alist[2][0])