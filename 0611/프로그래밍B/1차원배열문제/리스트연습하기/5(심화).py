import random
number = [10, 20, 30, 40, 50, 60, 70, 80, 90, 100]

index1=random.choice(number)
index2=random.choice(number)

answer = int(input(f"{index1} + {index2} = ?"))
if index1 + index2 == answer:
  print("맞았습니다.")
else:
  print("틀렸습니다.")