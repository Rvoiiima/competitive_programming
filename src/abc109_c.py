def gcd(a, b):
  while b > 0:
    a, b = b, a%b
  return a

N, X  = (int(i) for i in input().split())
x = (int(i) for i in input().split())
x = list(x)
x.append(X)
#print(x)
x = sorted(x)

ans = x[1]-x[0]
for i in range(2, N+1):
    ans = gcd(x[i]-x[i-1],ans)

print(ans)
