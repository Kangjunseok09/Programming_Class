n = int(input())
daylist = []
for i in range(n):
  att = map(int, input().split())
  daylist.append(att)

count = 0
for i in daylist:
  count += sum(i)
print(count)