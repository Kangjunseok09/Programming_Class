n = int(input("정수 입력>"))

if n % 2 == 0 and n % 3 == 0:
  print(n, "은 2와 3의 배수입니다.")
elif n % 2 == 0:
  print(n, "은 2의 배수이고 3의배수는 아닙니다.")
elif n % 3 == 0:
  print(n, "은 3의 배수이고 2의 배수는 아닙니다.")
else:
  print(n, "은 2와 3의 배수가 아닙니다.")