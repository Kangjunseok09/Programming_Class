n = int(input())
result = []
while n:
  result.append(n%2)
  n //= 2

for i in range(1, len(result)+1):
  print(result[-i], end="")
