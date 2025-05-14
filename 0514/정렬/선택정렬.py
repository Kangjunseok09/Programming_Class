def select_sort(arr):
  n = len(arr)
  for i in range(n-1):
    min_idx = i
    for j in range(1+i, n):
      if arr[min_idx] > arr[j]:
        min_idx = j
    arr[min_idx], arr[i] = arr[i], arr[min_idx]

  return arr

D = [2, 312, 3, 53, 671, 324, 67, 99]

print(select_sort(D))