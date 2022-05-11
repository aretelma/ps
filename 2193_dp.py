N = int(input())

tabula = [0, 1, 1]

for i in range(3, N + 1):
    tabula.append(tabula[i - 1] + tabula[i - 2])

print(tabula[N])
