a, b, c = map(int, input().split())

count = 0
while True:
    if a == b == c and a%2 == 0:
        count = -1
        break

    if a%2 == 0 and b%2 == 0 and c%2 == 0:
        count += 1
        a, b, c = (b + c)//2, (a + c)//2, (a + b)//2
    else:
        break

print(count)
