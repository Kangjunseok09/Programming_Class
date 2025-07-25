import sys
input = sys.stdin.readline
k, n = map(int, input().split())
list = [int(input()) for i in range(k)]

start = 1
end = max(list)
while start <= end:
  lanline = 0
  mid = (start + end) // 2
  for i in list:
    lanline += i // mid 
  if lanline >= n:
    start = mid + 1
  else:
    end = mid-1

print(end)