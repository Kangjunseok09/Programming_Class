# 구구단
# dan = int(input("원하는 단은: "))
# for i in range(1, 10):
#     print(dan, "*", i, "=", dan * i)

# 1부터 100까지 합
# sum = 0
# for i in range(1, 101):
#     sum += i
# print(sum)

# 문자열을 입력받아 a개수 확인
# sum = 0
# s = input()
# for i in s:
#     if i == "a":
#         sum += 1
# print(sum)

# 정수를 입력받고 0부터 그 수까지 출력
# n = int(input())
# for i in range(n+1):
#     print(i, end=" ")

# 정수를 입력받아 그 수만큼 *을 출력
# n = int(input())
# for i in range(n):
#     print("*", end="")

# 인덱스와 리스트값
# array = [273, 74, 103, 57, 52]
# for i in range(len(array)):
#     print(i, array[i])

# 60도만큼 회전시키면서 6개 원 그리기
# import turtle
# t = turtle.Turtle()
# for count in range(6):
#     t.circle(100)
#     t.right(60)

# 한변의 길이가 100인 사각형 그리기
# import turtle
# t = turtle.Turtle()
# for i in range(4):
#     t.forward(100)
#     t.right(90)

# 정수n각형 입력받고 그리기
# import turtle
# t = turtle.Turtle()
# n = int(input("정수입력> "))
# for i in range(n):
#     t.forward(100)
#     t.right(360/n)

# 별그리기
# import turtle
# t = turtle.Turtle()
# for i in range(5):
#     t.forward(100)
#     t.right(144)

# 팩토리얼 계산
# result = 1
# n = int(input("정수입력> "))
# for i in range(1, n+1):
#     result *= i
# print(n, "!은 ", result, sep="")

# for문 제어하기
# break
# sum = 0
# for i in range(1, 101):
#     sum += i
#     if sum >= 1000:
#         break
# print("1~100의 합에서 최초로 1000이 넘는 위치 :",i)

# continue
# sum = 0
# for i in range(1, 101):
#     if i % 3 == 0:
#         continue
#     sum += i
# print("1~100의 합(3의 배수제외) :",sum)

# 홀수의 곱을 구하되 곱이 100이상이 되면 종료
# mult = 1
# for a in range(1, 100):
#     if a % 2 == 0:
#         continue
#     print(mult, "*", a, "=", mult * a)
#     mult *= a
#     if mult >= 100:
#         break
