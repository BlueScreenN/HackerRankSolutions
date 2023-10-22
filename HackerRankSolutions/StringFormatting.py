def print_formatted(number):
    width = len(bin(number)[2:])
    if 1 <= number and number <= 99:
        for i in range(1, number+1):
            lengthBin = len(bin(number)[2:])
            print(str(i).rjust(lengthBin),
                  oct(i)[2:].rjust(lengthBin),
                  hex(i)[2:].upper().rjust(lengthBin),
                  bin(i)[2:].rjust(lengthBin))


if __name__ == '__main__':
    n = int(input())
    print_formatted(n)