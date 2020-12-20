s = input()
t = input()
ans = "No"
for i in range(len(s)-1):
    dummy = s[len(s)]
    s[i+1] = s[i]
    
    if s == t:
        ans = "Yes"
        break

print(ans)
