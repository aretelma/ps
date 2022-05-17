"""
n = int(input())
a = list(map(int, input().split()))

b = []
c = []

for i in range(len(a)):
    for j in range(i, len(a)):
        if (not b) or (b[-1] < a[j]):
            b.append(a[j])
    c.append(len(b))
    b = []

c.sort()
print(c[-1])
"""
n = int(input())
a = list(map(int, input().split()))

memo = [1] * n

for i in range(n):
    for j in range(i):
        if a[i] > a[j]:
            memo[i] = max(memo[i], memo[j]+1)

print(max(memo))