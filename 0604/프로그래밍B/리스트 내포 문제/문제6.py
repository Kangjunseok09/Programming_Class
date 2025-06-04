# 리스트에서 특정 값 제거
n = []
while True:
    s = int(input("입력: "))
    if s == 0:
        break
    n.append(s)
if 3 in n:
    n.remove(3)
print(f"출력: {n}")

