def main():
    n, m, x = map(int, input().split())
    num_list = list(map(int, input().split()))

    square_list = [0] * (n + 1)

    for n in num_list:
        square_list[n-1] = 1

    left = sum(square_list[0:x-1])
    right = sum(square_list[x:])

    print(min(left, right))


if __name__ == '__main__':
    main()
