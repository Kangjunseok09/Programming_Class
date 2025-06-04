# 리스트 정렬 및 뒤집기
s = list(map(int, input("입력: ").split()))
s.sort()
print(f"오름차순: {s}")
s.sort(reverse=True)
print(f"내림차순: {s}")
