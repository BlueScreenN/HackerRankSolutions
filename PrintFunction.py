if __name__ == '__main__':
    n = int(input())
    if 1 <= n and n <= 150:
        rangeValue = range(1, n+1)
        emptyString = ""
        for i in rangeValue:
            x = str(i)
            emptyString += x
        print(emptyString)