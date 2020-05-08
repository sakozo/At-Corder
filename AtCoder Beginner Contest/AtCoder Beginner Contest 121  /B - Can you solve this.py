n, m, c = map(int, input().split())
num = list(map(int, input().split()))
code_list = []
ans = 0

for _ in range(n):
    code_list.append(list(map(int, input().split())))

for code in code_list:
    result = 0
    for i, co in enumerate(code):
        result += co * num[i]
    if result + c > 0:
        ans += 1

print(ans)
