import heapq

a, b = map(int, input().split())

graph = {i:[] for i in range(1, a+1)}
for i in range(b):
  s, e, w = map(int, input().split())
  graph[s].append((w,e))
  graph[e].append((w,s))
queue = []
heapq.heappush()