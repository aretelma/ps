from itertools import product

N, M = map(int, input().split())

for i in product(range(1, 1+N), repeat = M):
    print(' '.join(map(str, i)))