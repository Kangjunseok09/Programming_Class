score = input().split()
total = 0
score[0] = int(score[0])
score[1] = int(score[1])
score[2] = int(score[2])

print("{:.2f}".format((score[0] + score[1] + score[2]) / 3))

