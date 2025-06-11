medal = [[6, 4, 10], [38, 32, 19], [26, 14, 17]]
gold = 0
silver = 0
bronze = 0

for i in medal:
  gold += i[0]
  silver += i[1]
  bronze += i[2]

print(f"금: {gold}")
print(f"은: {silver}")
print(f"동: {bronze}")