import math
n =int(input())

a = [int(i) for i in input().split()]

flag1 = [1 for i in range(1010)]
flag1[0] = flag1[1] = 0

prime = []

for i in range(2, 1001):
    if flag1[i] == 1:
        prime.append(i)
        j = 2
        while(i*j < 1002):
            flag1[i*j] = 0
            j+= 1

#flag1: isprime

flag_e =  [0 for j in range(1001)]
ans = 0

a.sort()
a.append(10000000)

for i in range(n):
    flag = True
    j = 0
    while(prime[j] < int(math.sqrt(a[i]))+1):
        if (flag_e[prime[j]] == True):
            if (a[i] % prime[j] == 0):
                flag = False
        j+=1;

    if (a[i] == a[i+1] or a[i-1] == a[i]):
        flag = False

    if (flag):
        ans += 1

    j = 0 
    while(prime[j] <= int(a[i])):
        if (flag_e[prime[j]] == 0 and (a[i] % prime[j])==0):
            flag_e[prime[j]] = 1
        j+=1

print(ans)





    
