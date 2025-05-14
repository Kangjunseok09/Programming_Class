# 구구단
# for dan in range(2, 10):
#     print(f"-----{dan}단-----")
#     for i in range(1, 10):
#         print(f"{dan} x {i} = {dan *i}")

# 80점 이상 합격 아니면 불합격 입력이 잘못됬을 경우 오류메세지 출력
score = int(input("점수를 입력하세요 > "))
while score < 0 or score > 100:
    print("입력이 잘못되었습니다.")
    score = int(input("점수를 다시 입력하세요 > "))

if score >= 80:
    print("합격입니다.")
else :
    print("불합격입니다.")
