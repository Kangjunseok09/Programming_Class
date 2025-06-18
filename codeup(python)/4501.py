man = []

for i in range(7):
    height = int(input())
    man.append(height)

for i in range(7):
    for j in range(6-i):
        if man[j] < man[j+1]:
            man[j], man[j+1] = man[j+1], man[j]

for i in range(2):
    print(man[i])