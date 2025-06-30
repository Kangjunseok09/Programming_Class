

def merge_sort(arr):
  length = len(arr)
  if length <= 1:
    return

  mid = length // 2
  g1 = arr[:mid]
  g2 = arr[mid:]
  merge_sort(g1)
  merge_sort(g2)

  i1 = 0
  i2 = 0
  ia = 0

  while i1 < len(g1) and i2 < len(g2):
    if g1[i1] < g2[i2]:
      arr[ia] = g1[i1]
      i1 += 1
      ia += 1
    else:
      arr[ia] = g2[i2]
      i2 += 1
      ia += 1

  while i1 < len(g1):
    arr[ia] = g1[i1]
    i1 += 1
    ia += 1

  while i2 < len(g2):
    arr[ia] = g2[i2]
    i2 += 1
    ia += 1

arr = list(map(int, input().split()))
merge_sort(arr)
print(arr)