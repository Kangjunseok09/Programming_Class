n = int(input("연도를 입력해 주세요"))

if n % 400 == 0:
  print(n, "은 윤년입니다.")
elif n % 4 == 0 and n % 100 != 0:
  print(n, "은 윤년입니다.")
else:
  print(n, "은 윤년이 아닙니다.")