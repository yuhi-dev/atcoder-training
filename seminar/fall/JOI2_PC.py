from collections import deque
dx = [1, 0, -1, 0]
dy = [0, 1, 0, -1]
H, W = map(int, input().split())
A = [list(map(int, input().split())) for i in range(H)]
C = [[-1 for j in range(W)] for i in range(H)]
N = 0
for i in range(H):
  for j in range(W):
    if C[i][j] == -1:
      C[i][j] = N
      Q = deque()
      Q.append((i, j))
      while len(Q) > 0:
        x, y = Q.pop()
        for k in range(4):
          x2 = x + dx[k]
          y2 = y + dy[k]
          if 0 <= x2 < H and 0 <= y2 < W:
            if C[x2][y2] == -1 and A[x2][y2] == A[x][y]:
              C[x2][y2] = N
              Q.append((x2, y2))
      N += 1
B = [0] * N
S = [0] * N
for i in range(H):
  for j in range(W):
    B[C[i][j]] = A[i][j]
    S[C[i][j]] += 1
E = [set() for i in range(N)]
for i in range(H):
  for j in range(W):
    if i < H - 1:
      if C[i][j] != C[i + 1][j]:
        E[C[i][j]].add(C[i + 1][j])
        E[C[i + 1][j]].add(C[i][j])
    if j < W - 1:
      if C[i][j] != C[i][j + 1]:
        E[C[i][j]].add(C[i][j + 1])
        E[C[i][j + 1]].add(C[i][j])
ans = 0
for i in range(N):
  D = dict()
  ans = max(ans, S[i])
  for j in E[i]:
    if B[j] not in D:
      D[B[j]] = S[j]
    else:
      D[B[j]] += S[j]
    ans = max(ans, S[i] + D[B[j]])
print(ans)