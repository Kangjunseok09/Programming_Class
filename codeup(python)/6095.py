n = int(input())

baduk = [[0 for i in range(19)] for j in range(19)]

for i in range(n):
  x, y = map(int, input().split())
  baduk[x-1][y-1] = 1

for i in range(19):
  for j in range(19):
    print(baduk[i][j],end=" ")
  print()