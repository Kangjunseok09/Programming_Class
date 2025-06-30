arr = list(map(int, input().split()))
length = len(arr)
for i in range(length):
  min_idx = i
  for j in range(i+1, length):
    if arr[min_idx] > arr[j]:
      min_idx = j
  arr[min_idx], arr[i] = arr[i], arr[min_idx]

print(arr)

