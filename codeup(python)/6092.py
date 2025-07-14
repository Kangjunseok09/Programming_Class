n = int(input())

cnt = [0 for i in range(23)]
attend = list(map(int, input().split()))
for i in range(n):
  cnt[attend[i]-1] += 1

for i in cnt:
  print(i, end=" ")