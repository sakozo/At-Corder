import math

n = int(input())
div_num = round(n/1.08)

for i in range(n+1):
    if math.floor(i * 1.08) == n:
        print(i)
        exit()
print(':(')

# WA
# import math
#
# n = int(input())
# div_num = round(n/1.08)
# if math.floor(div_num * 1.08) == n:
#     print(div_num)
# else:
#     print(":(")
