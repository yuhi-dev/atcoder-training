N = int(input())
A = input()

item = 0

for i in range(N):
    if A[i] == 'j':
        item += 2
    elif A[i] == 'o':
        item += 1
    else :
        item += 2
print(item)