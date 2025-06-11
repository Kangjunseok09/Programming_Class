daylist = [[0,1,0,0,1], [0,0,1,0,0], [0,1,0,1,0], [0,0,0,1,0], [0,0,0,0,0]]
count = 0
for i in daylist:
  count += i[1]
print(count)