def insert_sort(arr):
  n = len(arr)
  for i in range(n):
    key = arr[i]
    j = i - 1
    while j >= 0 and arr[j] > key:
      arr[j+1] = arr[j]
      j -= 1
      arr[j+1] = key
  return arr
D = [2, 312, 3, 53, 671, 324, 67, 99]
print(insert_sort(D))
