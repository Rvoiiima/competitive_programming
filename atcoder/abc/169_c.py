a, b = [x for x in input().split()]

a = int(a)
b_int = 0;
for i in range(len(b)):
    
    if (b[i] != '.'):
        b_int *= 10
        b_int += int(b[i])
a *= b_int
a /= 100
print(int(a))

