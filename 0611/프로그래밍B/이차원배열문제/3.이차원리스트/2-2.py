medal = [["대한민국",6, 4, 10], ["중국",38, 32, 19], ["일본",26, 14, 17]]
for i in medal:
  sum = 0
  for j in range(1, len(i)):
    sum += i[j]
  print(i[0], sum)