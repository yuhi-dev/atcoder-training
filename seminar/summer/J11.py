A = int(input())
B = int(input())
C = int(input())
if A + B == C:
    print(1)
elif A + C == B:
    print(1)
elif B + C == A:
    print(1)
else:
    print(0)