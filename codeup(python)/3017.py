n = int(input())
students = []

for i in range(1, n + 1):
    math, info = map(int, input().split())
    students.append((i, math, info))

students.sort(key=lambda x: (-x[1], -x[2], x[0]))

for student in students:
    print(student[0], student[1], student[2])