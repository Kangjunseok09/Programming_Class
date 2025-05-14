a = int(input("직선1의길이>"))
b = int(input("직선2의길이>"))
c = int(input("직선3의길이>"))

if a > b and a > c:
  if a < b+c:
    print("삼각형 가능")
  else:
    print("삼각형 불가능")
elif b > c:
  if b < a+c:
    print("삼각형 가능")
  else:
    print("삼각형 불가능")
else:
  if c < a+b:
    print("삼각형 가능")
  else:
    print("삼각형 불가능")  