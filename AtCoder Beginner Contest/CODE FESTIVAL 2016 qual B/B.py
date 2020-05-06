n, a, b = map(int,input().split())
s_list = list(input())

sum_AB = a + b
sum_total = 0
sum_B = 0

for s in s_list:
    if s == 'c':
        print('No')
        continue
    if s == 'a':
        if sum_total < sum_AB:
            print("Yes")
            sum_total += 1
        else:
            print('No')
    elif s == 'b':
        if sum_total < sum_AB and sum_B < b:
            print('Yes')
            sum_total += 1
            sum_B += 1
        else:
            print('No')
