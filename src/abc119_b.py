n = int(input())
 
x= [0,0,0,0,0,0,0,0,0,0]
v= [0,0,0,0,0,0,0,0,0,0]
ans = 0
for i in range(n):
    x[i], v[i] = input().split()
 
for i in range(n):
    x[i] = float(x[i])
    if v[i] == 'JPY':
        ans += x[i]
    else:
        ans += (x[i] * 380000.0)
 
print(ans)
