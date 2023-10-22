if __name__ == "__main__":
    n = int(input())
    rangeVarible = range(0, n)

    if 1 <= n and n <= 20:
        for i in range(0, n):
            print(i*i)