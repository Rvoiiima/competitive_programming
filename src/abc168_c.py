import math

pi = math.acos(-1)

a, b, h, m = (int(x) for x in input().split())

s_ang = h * 30 + m * 0.5
l_ang = m * 6

ang = min(abs(s_ang - l_ang), 360-abs(s_ang-l_ang))

rad = math.radians(ang)

c = math.sqrt(pow(a, 2) + pow(b, 2) - 2*a*b*math.cos(rad))

if ang == 0:
    c = abs(a-b)
elif ang == 180:
    c = a+b
    
print('{:.10f}'.format(c))

