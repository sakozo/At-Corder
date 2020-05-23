def main():
    n, x = map(int, input().split())
    num_list = list(map(int, input().split()))

    ans = 0
    num_list.sort()

    for num in num_list:
        if x - num >= 0:
            x -= num
            ans += 1
        else:
            break

    if ans == n and x > 0:
        ans -= 1

    print(ans)


if __name__ == '__main__':
    main()
