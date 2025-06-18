def greatest(data): # 함수명: greatest, 매개변수명: data
  greater = data[0]
  for i in range(1, len(data)):
    if greater < data[i]:
      greater = data[i]
  return greater  # greater을 반환한다

nums = [75, 80, 50, 85, 100, 95, 90, 65, 80, 70]
result = greatest(nums) # greatest함수 호출, 인수: nums
print(result)
