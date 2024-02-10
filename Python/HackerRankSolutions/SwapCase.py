def swap_case(s):
    newS = ""
    for i in s:
        if i.islower():
            newI = i.upper()
            newS += newI
        else:
            newI = i.lower()
            newS += newI
    return newS

if __name__ == '__main__':
    s = input()
    result = swap_case(s)
    print(result)

