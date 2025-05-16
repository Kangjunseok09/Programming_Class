import sys
n = int(input())
input = sys.stdin.readline
w = []
h = []
grade = []
for i in range(n):
  a, b = map(int, input().split())
  w.append(a)
  h.append(b)