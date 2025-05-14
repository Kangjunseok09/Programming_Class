# y가 입력될때 까지 계속 입력받는 문자열을 출력하는 프로그램

while True:
  s = input("y입력시 종료")
  if s == 'y':
    break
  print(s)