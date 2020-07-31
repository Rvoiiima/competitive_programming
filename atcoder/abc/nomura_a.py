h1, m1, h2, m2, k = [int(x) for x in input().split()]

ans = (h2 * 60 + m2) - (h1*60 + m1) - k

print(max(0, ans))
