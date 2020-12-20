def Fib(n):
    a, b = 0, 1
    if n == 1:
        return a
    elif n == 2:
        return b
    else:
        for i in range(n-2):
            a, b = b, a + b
        return b

a,b=[int(i) for i in input().split()]
ll=[]
y=-1
s=0
for i in range(b):
    x=int(input())
    ll.append(x)
    if x-y==1:
        s=1
        break
    y=x
ll.append(a+1)
l2=[]
if s==1:
    print(0)
elif b==0:
    print(Fib(a+2))
else:
    x=-1
    for i in ll:
        l2.append(Fib(i-x))
        x=i
    ans=1
    for i in l2:
        if i==0:
            i=1
        ans*=i
    print(ans%1000000007)
