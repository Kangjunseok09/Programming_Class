birth, num= input("주민등록번호 입력> ").split("-")

if num[0] == '4':
  print(2000 + int(birth[:2]), "년 태어난 여자 입니다.",sep="")
elif num[0] == '3':
  print(2000 + int(birth[:2]), "년 태어난 남자 입니다.",sep="")
elif num[0] == '2':
  print(1900 + int(birth[:2]), "년 태어난 여자 입니다.", sep="")
elif num[0] == '1':
  print(1900 + int(birth[:2]), "년 태어난 남자 입니다.", sep="")
