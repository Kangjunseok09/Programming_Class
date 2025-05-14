def find_insert_idx(r,v):
  for i in range(len(r)):
    if v < r[i]:
      return i
    
  return len(r)

def insert_sort(a):
  result = []
  while a:
    value = a.pop(0)
    ins_idx = find_insert_idx(result, value)
    result.insert(ins_idx, value)
  return result

D = [8, 9, 1, 1234, 23, 555]
print(insert_sort(D))