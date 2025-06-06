s = input()
for i in range(len(s)):
  if s[i] == s[i].upper():
    print(s[i].lower(), end="")
  else:
    print(s[i].upper(), end="")