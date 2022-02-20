n = int(input())
w =[]
for i in range(n):
    w.append(int(input()))

m = []
m.append(w[0])
m.append(w[0] + w[1])

m.append(max(m[0]+w[2], w[1]+w[2], m[1]))

for i in range(3, n):
    m.append(max(m[i-2]+w[i], m[i-3]+w[i-1]+w[i], m[i-1]))
# 전전 최대 + 현재 와인 or 전전전최대 + 전 와인 + 현재 와인 or 전 최대 + 현재 와인 안마심
    
print(m[n-1])
'''
n = int(input())
w = [0]
for i in range(n):
     w.append(int(input()))
dp = [0]
dp.append(w[1])
if n > 1:
    dp.append(w[1] + w[2])
for i in range(3, n + 1):
    dp.append(max(dp[i - 1], dp[i - 3] + w[i - 1] + w[i], dp[i - 2] + w[i]))
print(dp[n])
'''