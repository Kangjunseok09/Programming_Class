f= open("/Users/j_xuk53/Desktop/Programming_Class/0611/프로그래밍B/암호표.txt", "r")
pwTable = []
for _ in range(4):
  s = f.readline()
  pwTable.append(list(s))
pw = input("암호문: ")
print("원문:", end = " ")
for n in range(0, len(pw), 2):
  r = int(pw[n])
  c = int(pw[n+1])
  print(pwTable[r][c], end = "")