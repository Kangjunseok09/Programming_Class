s = input("윷의 결과를 입력해 주세요>")

if s.count('1') == 1:
  print("도")
elif s.count('1') == 2:
  print("개")
elif s.count('1') == 3:
  print("걸")
elif s.count('1') == 4:
  print("윷")
elif s.count('1') == 0:
  print("모")