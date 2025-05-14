n= int(input())
f = [-1, -1 , -1, 1, -1, 1]
for i in range(6, n+1):
    if f[i-5] + 1 and f[i-3]+1 :
        f.append(min(f[i-5]+1, f[i-3]+1))
    elif f[i-5] + 1 or f[i-3]+1 :
        f.append(max(f[i-5]+1, f[i-3] + 1))
    else:
        f.append(-1)
print(f[n])