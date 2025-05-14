n = int(input("연소득 입력>"))
period = int(input("재직기간 입력>"))

if n >= 40000000 and period >= 2:
  print("대출자격 있음")
else:
  if n < 40000000:
    print("연봉 4000만원 이상 필요")
  else:
    print("재직기간 2년 이상 필요")