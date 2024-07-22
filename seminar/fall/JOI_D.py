X = int(input())
N = int(input())

item = X
count = 0

while item < N:
    if item % 3 == 0:
        item += 1
    elif item % 3 == 1:
        item *= 2
    else:
        item *= 3
    count += 1

print(count)
