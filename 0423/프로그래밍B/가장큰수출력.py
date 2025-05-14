a = int(input("첫번째 숫자>"))
b = int(input("두번째 숫자>"))
c = int(input("세번째 숫자>"))

if a > b and a > c:
  print("가장 큰 수는", a)
elif b > c:
  print("가장 큰 수는", b)
else:
  print("가장 큰 수는", c)