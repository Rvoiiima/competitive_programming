N = int(input())

w = [int(x) for x in input().split()]

ans  = 10000000000

for T in range(1, N):
    ans = min(ans, abs(sum(w[:T]) - sum(w[T:])));

print(ans)
