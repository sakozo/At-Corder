def main():
    S = input()
    a = "B" if S[1] == "R" else "R"
    ans = "A{}C".format(a)
    
    print(ans)


if __name__ == '__main__':
    main()
