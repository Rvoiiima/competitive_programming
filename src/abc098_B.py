n = int(input())
s = input()
max = 0

for i in range(n):
    a = set(s[:i+1])    
    b = set(s[i+1:])
    l = len(a & b)
    if l > max:
        max = l
print(max)
