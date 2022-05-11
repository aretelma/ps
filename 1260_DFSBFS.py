from collections import deque
#import numpy as np

N, M, V = map(int, input().split())

#G = np.zeros((N+1, N+1), dtype=int)
#visit = np.zeros(N+1, dtype=int)
G = [[0]* (N+1) for i in range(N+1)]
visit = [0]* (N+1)

for i in range(M):
    a, b = map(int, input().split())
    G[a][b] = 1
    G[b][a] = 1

def dfs(v):
    visit[v] = 1
    print(v, end = ' ')
    for i in range(1, N+1):
        if visit[i] == 0 and G[v][i] == 1:
            dfs(i)

def bfs(v):
    que = deque()
    que.append(v)
    visit[v] = 1
    while que:
        v = que.popleft()
        print(v, end = ' ')
        for i in range(1, N+1):
            if visit[i] == 0 and G[v][i] == 1:
                que.append(i)
                visit[i] = 1

dfs(V)
#visit = np.zeros(N+1, dtype=int)
visit = [0]* (N+1)
print()
bfs(V)