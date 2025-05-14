import random

n = int(input("복권번호를 입력하시오(0~99)"))
a = random.randint(0, 99)

print(f"당첨번호는 {a}입니다.")
if n == a:
  print("상금 100만원!")
elif n // 10 == a // 10 or n // 10 == a%10 or n % 10 == a // 10 or n % 10 == a%10: 
  print("상금 50만원!")
else :
  print("상금이 없습니다.")