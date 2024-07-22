N = int(input())
A = list(map(int, input().split()))
mx = max(A)
mn = min(A)
for i in range(N):
  print(max(A[i] - mn, mx - A[i]))
