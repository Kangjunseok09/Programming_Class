age = int(input("나이를 입력해주세요>"))
if age >= 20:
  result = "성인"
elif age >= 17:
  result = "고등학생"
elif age >= 14:
  result = "중학생"
elif age >= 8:
  result = "초등학생"
else:
  result = "미취학"

print(result)