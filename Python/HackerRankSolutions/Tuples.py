if __name__ == '__main__':
    n = int(input())
    integerList = map(int, input().split())
    print(hash(tuple(integerList)))

