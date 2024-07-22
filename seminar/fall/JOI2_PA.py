N = int(input())
A = list(map(int,input().split()))
         
mn = min(A)
mx = max(A)

for a in A:
    print(max(a - mn,mx - a))