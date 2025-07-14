n = int(input())
sit = list(map(int, input().split()))
sit = reversed(sit)
for i in sit:
  print(i, end=" ")