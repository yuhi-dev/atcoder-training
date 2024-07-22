N = int(input())
A = list(map(int, input().split()))

pushed = [False] * 10

for i in range(N):
    pushed[A[i]] = True

for i in range(10):
    if pushed[i]:
        print(i)