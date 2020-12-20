a, b = (int(i) for i in input().split())

add = a+b
sub = a-b
mul = a*b

max = float("-inf")

if add > max:
    max = add
if sub > max:
    max = sub
if mul > max:
    max = mul

print(int(max))
