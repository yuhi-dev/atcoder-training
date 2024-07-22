N = int(input())
sum = [0] * (N + 1)
for i in range(N):
  X, Y = map(int, input().split())
  if sum[i] - sum[i - X] >= Y:
    sum[i + 1] = sum[i] + 1
  else:
    sum[i + 1] = sum[i]
print(sum[N])
