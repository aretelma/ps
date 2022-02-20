import sys
n, m, b = map(int, sys.stdin.readline().split())
house = [list(map(int, sys.stdin.readline().split())) for _ in range(n)]

h = 0
ans = 1000000000000000000000000000000

for i in range(257):
    over =0
    need = 0
    for j in range(n):
        for k in range(m):
            if house[j][k] < i:
                need += (i - house[j][k])
            else:
                over += (house[j][k] - i)
    if over + b < need:
        continue
    t = 2 * over + need
    if t <= ans:
        ans = t
        h = i

print(ans, h)


