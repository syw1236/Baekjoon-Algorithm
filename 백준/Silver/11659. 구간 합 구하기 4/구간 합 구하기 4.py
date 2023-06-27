import sys
input = sys.stdin.readline
n,m = map(int,input().split())
numbers = list(map(int,input().split()))
sumList = [0]
temp = 0

for i in numbers:
    temp+=i
    sumList.append(temp)
for i in range(m):
    i,j = map(int,input().split())
    print(sumList[j]-sumList[i-1])