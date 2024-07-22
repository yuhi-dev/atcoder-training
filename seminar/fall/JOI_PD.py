N = int(input())
A = list(map(int, input().split()))

sorted_A = sorted(A)  

prev_num = None

for num in sorted_A:
    if num != prev_num:
        print(num)
        prev_num = num