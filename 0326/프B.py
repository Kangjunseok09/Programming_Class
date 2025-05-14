
# 비교연산자

print("가방" == "가방")
print("가방" != "하마")
print("가방" < "하마")  # 한글은 사전순서(가나다순)로 앞에 있는것이 작은 값을 갖습니다.
print("가방" > "하마")

# not연산자

x = 10
under_20 = x < 20
print("under_20:", under_20)
print("not under_20:", not under_20)

id = "python"
pw = "1234" 
answer1 = input("아이디:")
answer2 = input("패스워드:")
print(id==answer1)
print(pw==answer2)
print(id==answer1 and pw==answer2)