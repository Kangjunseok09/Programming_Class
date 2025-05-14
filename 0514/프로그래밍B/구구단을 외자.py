import random

print("구구단을 외자! 구구단을 외자!")

for i in range(10):
  f = random.randint(2, 9)
  s = random.randint(2, 9)

  print(f"{f} x {s}?")
  c = int(input())
  if c != f*s:
    print("틀렸습니다!")
