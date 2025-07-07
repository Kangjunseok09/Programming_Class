n = int(input())
daylist = []
for i in range(n):
  att = input().split()
  daylist.append(att)
count = 0

for i in daylist:
  for j in i:
    if j == '1':
      count += 1

print(count)
  
