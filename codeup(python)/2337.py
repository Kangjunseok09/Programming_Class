from datetime import date, timedelta

k = int(input())
n, m = map(int, input().split())

total = 0
day = 0  

while total < k:
    day += 1
    if (day - 1) % 2 == 0: 
        total += n
    if (day - 1) % 3 == 0: 
        total += m

if day % 2 == 1:          
    first_gold_day = day + 2
else:                      
    first_gold_day = day + 1

start = date(2023, 1, 1)
date = start + timedelta(days=first_gold_day - 1)  
print(date.strftime("%Y/%m/%d"))