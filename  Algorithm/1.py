n = int(input())
R = [int(input()) for _ in range(n)]

maxv = R[1] - R[0]
minv = R[0]

for r in R[1:]:
    maxv = max(maxv, r - minv)
    minv = min(minv, r)

print(maxv)
