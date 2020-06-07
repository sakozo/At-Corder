import math

def main():
    n = int(input())
    num_list = [list(map(int, input().split())) for _ in range(n)]
    ans_list = []

    for i, n in enumerate(num_list):
        for j, l in enumerate(num_list):
            if i == j:
                continue

            ans_list.append(math.sqrt((n[0]-l[0])**2 + (n[1]-l[1])**2))

    print(max(ans_list))


if __name__ == '__main__':
    main()

