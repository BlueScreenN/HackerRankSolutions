def print_rangoli(n):
    if 0 < n < 27:
        alphabet = 'abcdefghijklmnopqrstuvwxyz'

        lines = []
        for i in range(n):
            s = '-'.join(alphabet[n-1:i:-1] + alphabet[i:n])
            line = (s.center(n * 4 - 3, '-'))
            lines.append(line)

        lines = lines[::-1] + lines[1:]

        rangoli = "\n".join(lines)
        print(rangoli)
    else:
        print("n should be in between 0 and 27!")

if __name__ == '__main__':
    n = int(input())
    print_rangoli(n)