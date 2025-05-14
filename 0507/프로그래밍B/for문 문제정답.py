n = int(input())
sum = 0
for i in range(n):
    if i % 3 == 0 and i % 5 != 0:
        sum += 1

print(sum)