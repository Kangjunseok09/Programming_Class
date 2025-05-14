score = int(input("당신의 점수는 몇점인가요?"))

if score >= 90:
  result = "A"
elif score >= 80:
  result = "B"
elif score >= 70:
  result = "C"
else :
  result = "F"
print(result)