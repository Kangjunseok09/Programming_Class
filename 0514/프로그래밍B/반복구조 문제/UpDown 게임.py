import random
com = random.randint(1, 100)


while True:
  player = int(input("1부터 100사이의 숫자야, 맞춰봐 >"))
  if player == com:
    print("정답!")
    break
  elif player > com:
    print("Down")
  elif player < com:
    print("Up")
