import random

print("구구단을 외자! 구구단을 외자!")

while True:
  f = random.randint(2, 9)
  s = random.randint(2, 9)

  print(f"{f} x {s}?")
  c = int(input())
  if c != f*s:
    print(f"땡! 정답은 {f*s}")
    break
