n = int(input())
m = int(input())
nets = list(map(int, input().split()))

target = n - m

nets.sort(reverse=True)

count = 0
for net in nets:
  while net < target:
    target -= net
    count += 1

if target > 0:
  print(-1)
else:
  print(count)