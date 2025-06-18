# 두 수의 합계를 구하는 프로그램

def sum(a,b):
  return a+b
print(sum(10,5))

# 세수를 입력받고 평균을 구하는 프로그램

def avg(m, s, i):
  average = (m+s+i)/3
  return average
mat = int(input("수학 점수 입력: "))
sci = int(input("과학 점수 입력: "))
info = int(input("정보 점수 입력: "))
result = avg(mat, sci, info)
print(result)


