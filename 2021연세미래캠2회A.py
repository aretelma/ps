n ,m = input().split()
n = int(n)
m = int(m)

a = input().split()
for i in range(m):
    a[i] = int(a[i])

fee = [[0 for col in range(n)] for row in range(n)]
for i in range(n):
    fee[i] = input().split()
    for j in range(n):
        fee[i][j] = int(fee[i][j])

sum = 0
for i in range(m-1):
    sum += fee[a[i]-1][a[i+1]-1]

print(sum)

