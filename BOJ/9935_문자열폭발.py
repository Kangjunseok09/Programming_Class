s = input()
word = input()
while word in s:
  if s == "":
    print("FRULA")
  if s == s.replace(word, ""):
    break;
  else:
    s = s.replace(word, "")
print(s)