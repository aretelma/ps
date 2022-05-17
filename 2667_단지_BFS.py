from collections import deque

n = int(input())
g = [[0] * n for _ in range(n)]
visit = [[0] * n for _ in range(n)]
dan = []
que = deque()

for i in range(n):
    g[i] = list(map(int, list(input())))

for i in range(n):
    for j in range(n):
        if g[i][j] == 1 and visit[i][j] == 0:
            que = deque()
            que.append((i, j))
            visit[i][j] = 1
            houses = 0
            while que:
                a, b = que.popleft()
                houses += 1
                if a < n-1: 
                    if g[a+1][b] == 1 and visit[a+1][b] == 0:
                        que.append((a+1, b))
                        visit[a+1][b] = 1
                if b < n-1:
                    if g[a][b+1] == 1 and visit[a][b+1] == 0:
                        que.append((a, b+1))
                        visit[a][b+1] = 1
                if a > 0: 
                    if g[a-1][b] == 1 and visit[a-1][b] == 0:
                        que.append((a-1, b))
                        visit[a-1][b] = 1
                if b > 0: 
                    if g[a][b-1] == 1 and visit[a][b-1] == 0:
                        que.append((a, b-1))
                        visit[a][b-1] = 1
            dan.append(houses)

print(len(dan))
dan.sort()
for i in dan:
    print(i)
