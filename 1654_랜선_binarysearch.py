import sys

K, N = map(int, input().split())
leng = [int(sys.stdin.readline()) for _ in range(K)]

begin, end = 1, max(leng)

while begin <= end:
    mid = (begin + end) // 2 # // : 나누고 정수부분만 
    lans = 0
    for i in leng:
        lans += i // mid # 나눠진 랜선 수 
    if lans >= N:
        begin = mid + 1 # 충분하면 랜선 길이 늘려서 되는지 확인
    else:
        end = mid - 1 # 부족하면 랜선 길이 줄여서 되는지 확인

print(end)
    



