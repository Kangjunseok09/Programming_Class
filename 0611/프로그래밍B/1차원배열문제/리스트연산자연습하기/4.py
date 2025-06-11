import random
alist = []
for i in range(5):
  num = random.randint(1, 100)
  alist.append(num)

if 50 in alist:
  print("50이 존재합니다")
else:
  print("50이 존재하지않습니다.")
print(f"리스트 숫자: {alist}")


