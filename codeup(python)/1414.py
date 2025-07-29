s = input().lower()
cnt = s.count("c")

ccnt = 0
for i in range(len(s)-1):
  if s[i] == "c" and s[i+1] == "c":
    ccnt += 1
print(cnt)
print(ccnt)
