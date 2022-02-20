n, k = input().split()
n = int(n)
k = int(k)

l = input().split()
for i in range(n-1):
    l[i] = int(l[i])

M = []
for i in range(n-1):
    max_block = 0
    jump = True
    for j in range(i, n-1):
        if (k < l[j]):
            if jump:
                max_block += 1
                jump = False
            else:
                break
        else:
            max_block += 1
    M.append(max_block)
    
print(max(M)+1)