def gcd(a,b):
    while b!=0:
        a,b=b,a%b
    return a

 #最小公倍数
def lcm(a,b):
    return a*b//gcd(a,b)

a, b = [int(i) for i in input().split()]
print(lcm(a, b))
