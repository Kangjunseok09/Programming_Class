import sys
input = sys.stdin.readline

n = int(input())
arr = []
for i in range(n):
  arr.append(int(input()))

for i in sorted(arr):
  print(i)