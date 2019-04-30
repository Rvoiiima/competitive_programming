import collections
def gcd(a, b):
    if (b > a):
        a, b = b, a

    if (b == 0):
        return a
    return gcd(b, a%b) 
    
n = int(input())
a = [int (i) for i in input().split()]

gcd_list = []
for i in range(1, n):
    gcd_list.append(gcd(a[i], a[i-1]))

gcd_list.append(gcd(a[n-1],a[0]))
max_gcd = max(gcd_list)

c = collections.Counter(gcd_list)
most_common =  c.most_common()

if c[max_gcd] >= n-2 and most_common < max_gcd:
    print(max_gcd)
else:
    print(most_common)
