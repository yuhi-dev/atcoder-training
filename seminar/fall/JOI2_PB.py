import bisect

N = int(input())
A = list(map(int, input().split()))
B = list(map(int, input().split()))
C = list(map(int, input().split()))
D = list(map(int, input().split()))

A.sort()
B.sort()
C.sort()
D.sort()

Cand = []
for i in range(N):
    Cand.append(A[i])
    Cand.append(B[i])
    Cand.append(C[i])
    Cand.append(D[i])

Answer = 12345678901234567890
for i in Cand:
    PA = 12345678901234567890
    PB = 12345678901234567890
    PC = 12345678901234567890
    PD = 12345678901234567890
    
    pos1 = bisect.bisect_left(A, i)
    pos2 = bisect.bisect_left(B, i)
    pos3 = bisect.bisect_left(C, i)
    pos4 = bisect.bisect_left(D, i)
    if pos1 < N: PA = A[pos1]
    if pos2 < N: PB = B[pos2]
    if pos3 < N: PC = C[pos3]
    if pos4 < N: PD = D[pos4]
    Answer = min(Answer, max(PA, PB, PC, PD) - i)

print(Answer)
