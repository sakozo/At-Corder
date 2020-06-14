a, v = map(int, input().split())
b, w = map(int, input().split())
t = int(input())

# if (b - a) <= (v-w)*t:
#     print("YES")
# else:
#     print("NO")

# if b+1000000000+w*t > a+1000000000+v*t:
#     print("NO")
# else:
#     print("YES")


if a <b:
    dis = b - a
else:
    dis = a - b

dif = v-w

if w > v:
    print("NO")
elif dis <= dif*t:
    print("YES")
else:
    print("NO")
