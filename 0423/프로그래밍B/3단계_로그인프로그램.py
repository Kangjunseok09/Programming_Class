id = "ilovepython"
pawd = 123456

s = input("아이디를 입력하시오: ")
n = int(input("비밀번호를 입력하시오: "))

if s == id and n == pawd:
  print("환영합니다")
elif s == id:
  print("아이디와 비밀번호가 일치하지 않습니다.")
elif s == "admin" and n == 11111:
  print("관리자가 로그인하였습니다.")
else:
  print("아이디를 찾을 수 없습니다.")