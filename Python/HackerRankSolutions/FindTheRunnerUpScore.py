if __name__ == '__main__':
    numberOfElements = int(input())
    valuesList = list(map(int, input().split()))

    if len(valuesList) != numberOfElements:
        exit()

    valuesList.sort(reverse=True)
    secondLargest = None

    largest = valuesList[0]

    for value in valuesList[1:]:
        if value != largest:
            secondLargest = value
            break

    if secondLargest is not None:
        print(secondLargest)
